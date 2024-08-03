void __fastcall CommandCardEquipmentControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w1
  struct CommandCardEquipmentControl_StaticFields *static_fields; // x0
  int32_t v15; // w1
  struct CommandCardEquipmentControl_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct CommandCardEquipmentControl_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  struct CommandCardEquipmentControl_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct CommandCardEquipmentControl_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  struct CommandCardEquipmentControl_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  struct CommandCardEquipmentControl_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  struct CommandCardEquipmentControl_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  struct CommandCardEquipmentControl_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3

  if ( (byte_49FFB15 & 1) == 0 )
  {
    sub_1B640C8(&CommandCardEquipmentControl_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20443/*"img_txt_equipcc_3"*/, v4);
    sub_1B640C8(&StringLiteral_20442/*"img_txt_equipcc_1"*/, v5);
    sub_1B640C8(&StringLiteral_20005/*"icon_arrow_pink"*/, v6);
    sub_1B640C8(&StringLiteral_17533/*"btn_txt_replace"*/, v7);
    sub_1B640C8(&StringLiteral_20516/*"img_txt_unlockcc"*/, v8);
    sub_1B640C8(&StringLiteral_17505/*"btn_txt_equipcc"*/, v9);
    sub_1B640C8(&StringLiteral_20444/*"img_txt_equipcc_4"*/, v10);
    sub_1B640C8(&StringLiteral_17557/*"btn_txt_unlockcc"*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49FFB15 = 1;
  }
  CommandCardEquipmentControl_TypeInfo->static_fields->defaultDetailColor = (struct UnityEngine_Color_o)xmmword_BA42B0;
  v13 = StringLiteral_20005/*"icon_arrow_pink"*/;
  static_fields = CommandCardEquipmentControl_TypeInfo->static_fields;
  static_fields->DEFAULT_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20005/*"icon_arrow_pink"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->DEFAULT_MESSAGE_SPRITE_NAME, v13, v2, v3);
  v15 = StringLiteral_20516/*"img_txt_unlockcc"*/;
  v16 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v16->UNLOCK_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20516/*"img_txt_unlockcc"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->UNLOCK_MESSAGE_SPRITE_NAME, v15, v17, v18);
  v19 = StringLiteral_20442/*"img_txt_equipcc_1"*/;
  v20 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v20->EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20442/*"img_txt_equipcc_1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->EQUIPED_MESSAGE_SPRITE_NAME, v19, v21, v22);
  v23 = StringLiteral_20443/*"img_txt_equipcc_3"*/;
  v24 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v24->SELECTED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20443/*"img_txt_equipcc_3"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->SELECTED_MESSAGE_SPRITE_NAME, v23, v25, v26);
  v27 = StringLiteral_20444/*"img_txt_equipcc_4"*/;
  v28 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v28->NOT_EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20444/*"img_txt_equipcc_4"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28->NOT_EQUIPED_MESSAGE_SPRITE_NAME, v27, v29, v30);
  v31 = (int)StringLiteral_1/*""*/;
  v32 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v32->DEFAULT_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->DEFAULT_EXE_BTN_SPRITE_NAME, v31, v33, v34);
  v35 = StringLiteral_17557/*"btn_txt_unlockcc"*/;
  v36 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v36->UNLOCK_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17557/*"btn_txt_unlockcc"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36->UNLOCK_EXE_BTN_SPRITE_NAME, v35, v37, v38);
  v39 = StringLiteral_17505/*"btn_txt_equipcc"*/;
  v40 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v40->EQUIP_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17505/*"btn_txt_equipcc"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->EQUIP_EXE_BTN_SPRITE_NAME, v39, v41, v42);
  v43 = StringLiteral_17533/*"btn_txt_replace"*/;
  v44 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v44->REPLACE_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17533/*"btn_txt_replace"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v44->REPLACE_EXE_BTN_SPRITE_NAME, v43, v45, v46);
}


void __fastcall CommandCardEquipmentControl___ctor(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  if ( (byte_49FFB14 & 1) == 0 )
  {
    sub_1B640C8(&CombineMenuControl_TypeInfo, method);
    byte_49FFB14 = 1;
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
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Component_o *lockButton; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x21
  __int64 v18; // x1
  int64_t v19; // x21
  Il2CppObject *Entity; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct UserCommandCodeEntity_o *v23; // x8
  __int128 v24; // q1
  CommandCardEquipmentControl_o *v25; // x0
  const MethodInfo *v26; // x2
  bool v27; // w0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  UILabel_o *commandCardNotEquippedDetail; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-40h]

  if ( (byte_49FFAEF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&nowKind);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_3637/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, v9);
    byte_49FFAEF = 1;
  }
  CommandCardEquipmentControl__InitDisplayInfo(this, *(const MethodInfo **)&nowKind);
  p_nowEquipedUserCommandCodeEntity = &this->fields.nowEquipedUserCommandCodeEntity;
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nowEquipedUserCommandCodeEntity, 0, v11, v12);
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
                CommandCardEquipmentControl__SetUnlockItemInfo(this, v30);
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
      CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v31);
      CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v32);
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
    lockButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3637/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, 0LL);
    if ( commandCardNotEquippedDetail )
    {
      UILabel__set_text(commandCardNotEquippedDetail, (System_String_o *)lockButton, 0LL);
      goto LABEL_45;
    }
LABEL_46:
    sub_1B64324(lockButton);
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
  CommandCardEquipmentControl__SetRemoveButttonState(this, 1, v15);
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
    sub_1B6432C(lockButton, v18);
  v19 = userCommandCodeIds->m_Items[(int)lockButton];
  lockButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lockButton )
    goto LABEL_46;
  lockButton = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)lockButton,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !lockButton )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)lockButton,
             v19,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  *p_nowEquipedUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    (int32_t)Entity,
    v21,
    v22);
  v23 = *p_nowEquipedUserCommandCodeEntity;
  if ( !*p_nowEquipedUserCommandCodeEntity )
    goto LABEL_46;
  v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v34 = v35;
  v25 = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v34, 0LL);
  v27 = CommandCardEquipmentControl__EnableReplace(v25, (int64_t)v25, v26);
  CommandCardEquipmentControl__SetReplaceButtonState(this, v27, v28);
  CommandCardEquipmentControl__SetSelectedCommandCodeInfo(this, (UserCommandCodeEntity_o *)Entity, 0, -1, v29);
LABEL_45:
  CommandCardEquipmentControl__UpdateItemLinkListWindowButton(this, v14);
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
  if ( (byte_49FFAF4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__, dic);
    this = (CommandCardEquipmentControl_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_49FFAF4 = 1;
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
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v9, 0LL);
  if ( !dic )
LABEL_8:
    sub_1B64324(this);
  return System_Collections_Generic_Dictionary_long__long___ContainsKey(
           dic,
           (int64_t)this,
           (const MethodInfo_315EAF0 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
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

  if ( (byte_49FFAF3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FFAF3 = 1;
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
      Master_object = (UserServantCommandCodeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
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
    sub_1B64324(Master_object);
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
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *baseSelectInfoObj; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-40h]

  if ( (byte_49FFAEB & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_49FFAEB = 1;
  }
  if ( !selectBase )
  {
    CommandCardEquipmentControl__InitDispBaseServantInfo(this, (const MethodInfo *)selectBase);
    CommandCardEquipmentControl__InitDisplayInfo(this, v15);
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, v16);
    baseSelectInfoObj = this->fields.baseSelectInfoObj;
    if ( baseSelectInfoObj )
    {
      UnityEngine_GameObject__SetActive(baseSelectInfoObj, 1, 0LL);
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v17);
      goto LABEL_13;
    }
LABEL_14:
    sub_1B64324(baseSelectInfoObj);
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v6 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v20.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v19 = v20;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v19, 0LL);
    v8 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
    *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v18.fields.fakeValue = v8;
    if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v18, 0LL) )
    {
      CommandCardEquipmentControl__InitDisplayInfo(this, v9);
      CommandCardEquipmentControl__InitDispCommandCardInfo(this, v10);
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v11);
    }
  }
  baseSelectInfoObj = this->fields.baseSelectInfoObj;
  if ( !baseSelectInfoObj )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(baseSelectInfoObj, 0, 0LL);
LABEL_13:
  this->fields.baseUserServantEntity = selectBase;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBase, v13, v14);
}


void __fastcall CommandCardEquipmentControl__CloseRemoveCommandCodeDialog(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  CommandCardDialog__Close_44427484(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestRemoveCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1B64324(commandCardDialog);
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
  UnityEngine_Component_o *v11; // x20
  __int64 v12; // x1
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v14; // x22
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x21
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_49FFB0E & 1) == 0 )
  {
    sub_1B640C8(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FFB0E = 1;
  }
  commandCodeAppearEffect = (Il2CppObject *)this->fields.commandCodeAppearEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeAppearEffect,
                                                   (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v11 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( commandCardList->max_length <= targetCommandCardIdx )
    sub_1B6432C(Component_object, v12);
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
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v11, 0LL);
  v16 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7111 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v15);
    byte_49F7111 = 1;
  }
  if ( !v16 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v11, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7116 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F7116 = 1;
  }
  if ( !v18 )
LABEL_18:
    sub_1B64324(Component_object);
  UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v11, commandCodeId, v19);
  return (CommandCodeEffectComponent_o *)v11;
}


CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateAttachEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *commandCodeFlashEffect; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  UnityEngine_Component_o *v7; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v9; // x20
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x20
  __int64 v12; // x1
  UnityEngine_Transform_o *v13; // x20

  if ( (byte_49FFB10 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FFB10 = 1;
  }
  commandCodeFlashEffect = (Il2CppObject *)this->fields.commandCodeFlashEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeFlashEffect,
                                                   (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_17;
  v7 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_17;
  v9 = (UnityEngine_Transform_o *)Component_object;
  Component_object = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  if ( !v9 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v9, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v7, 0LL);
  v11 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7111 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v10);
    byte_49F7111 = 1;
  }
  if ( !v11 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v7, 0LL);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7116 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
    byte_49F7116 = 1;
  }
  if ( !v13 )
LABEL_17:
    sub_1B64324(Component_object);
  UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (CommandCodeEffectComponent_o *)v7;
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
  UnityEngine_Component_o *v11; // x20
  __int64 v12; // x1
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v14; // x22
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x21
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_49FFB0D & 1) == 0 )
  {
    sub_1B640C8(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FFB0D = 1;
  }
  commandCardDetachEffect = (Il2CppObject *)this->fields.commandCardDetachEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCardDetachEffect,
                                                   (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v11 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( commandCardList->max_length <= targetCommandCardIdx )
    sub_1B6432C(Component_object, v12);
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
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v11, 0LL);
  v16 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7111 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v15);
    byte_49F7111 = 1;
  }
  if ( !v16 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v11, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7116 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F7116 = 1;
  }
  if ( !v18 )
LABEL_18:
    sub_1B64324(Component_object);
  UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v11, commandCodeId, v19);
  return (CommandCodeEffectComponent_o *)v11;
}


CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateReplaceEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *commandCodeReplaceEffect; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  UnityEngine_Component_o *v7; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v9; // x20
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x20
  __int64 v12; // x1
  UnityEngine_Transform_o *v13; // x20

  if ( (byte_49FFB0F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FFB0F = 1;
  }
  commandCodeReplaceEffect = (Il2CppObject *)this->fields.commandCodeReplaceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeReplaceEffect,
                                                   (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_17;
  v7 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_17;
  v9 = (UnityEngine_Transform_o *)Component_object;
  Component_object = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  if ( !v9 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v9, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v7, 0LL);
  v11 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7111 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v10);
    byte_49F7111 = 1;
  }
  if ( !v11 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v7, 0LL);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7116 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
    byte_49F7116 = 1;
  }
  if ( !v13 )
LABEL_17:
    sub_1B64324(Component_object);
  UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (CommandCodeEffectComponent_o *)v7;
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
  UserCommandCodeEntity_array *List; // x0
  UserCommandCodeEntity_array *v11; // x20
  System_Collections_Generic_List_long__o *EquipedCommandCodeList; // x0
  __int64 v13; // x1
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

  if ( (byte_49FFAF0 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, nowEquipedUserCommandCodeId);
    sub_1B640C8(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Contains__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_49FFAF0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_32;
  List = UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Master_object, 0LL);
  if ( !List || (v11 = List, !*(_QWORD *)&List->max_length) )
  {
LABEL_29:
    LOBYTE(Master_object) = 1;
    return Master_object;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
  if ( !Master_object )
LABEL_32:
    sub_1B64324(Master_object);
  EquipedCommandCodeList = UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                             (UserServantCommandCodeMaster_o *)Master_object,
                             0LL);
  max_length = v11->max_length;
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
      if ( v18 >= v11->max_length )
        sub_1B6432C(Master_object, v13);
      v19 = v11->m_Items[v18];
      if ( !v19 )
        goto LABEL_32;
      v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v25.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v24 = v25;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v24, 0LL);
      if ( Master_object != nowEquipedUserCommandCodeId )
      {
        v21 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
        *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v25.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v23 = v25;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v23, 0LL);
        if ( !v15 )
          goto LABEL_32;
        Master_object = System_Collections_Generic_List_long___Contains(
                          v15,
                          Master_object,
                          (const MethodInfo_34953EC *)Method_System_Collections_Generic_List_long__Contains__);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  if ( (byte_49FFB04 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_49FFB04 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  p_baseUserServantEntity = (Il2CppObject **)&this->fields.baseUserServantEntity;
  v6 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0LL;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v13, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    p_baseUserServantEntity,
    v10,
    (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_49FFAEA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FFAEA = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = klass;
  *(_QWORD *)&v11.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
}


bool __fastcall CommandCardEquipmentControl__GetExeBtnState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_49FFAF2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFAF2 = 1;
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
    sub_1B64324(this);
  if ( userCommandCodeIds->max_length <= index )
    sub_1B6432C(this, *(_QWORD *)&index);
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
        sub_1B6432C(this, method);
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
    sub_1B64324(this);
  }
LABEL_9:
  v6->fields.targetCommandCardData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.targetCommandCardData, 0, v2, (int32_t)v3);
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
    sub_1B64324(commandCardInfoObj);
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
        sub_1B6432C(baseSelectInfoObj, v5);
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
    sub_1B64324(baseSelectInfoObj);
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
  UnityEngine_GameObject_o *cardSwitchButton; // x0
  UnityEngine_Object_o *charaGraph; // x20
  ServantStatusBattleListViewItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FFAE6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFAE6 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantCommandCodeEntity, 0, v5, v6);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity, 0, v7, v8);
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nowEquipedUserCommandCodeEntity, 0, v9, v10);
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1B6406C(p_charaGraph, 0, v15, v16);
      return;
    }
LABEL_12:
    sub_1B64324(cardSwitchButton);
  }
}


void __fastcall CommandCardEquipmentControl__InitDispCommandCardInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  UnityEngine_Component_o *lockButton; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  int max_length; // w21
  il2cpp_array_size_t v10; // w22
  CombineCommandCardComponent_o *v11; // x20
  const MethodInfo *v12; // x2

  this->fields.targetCommandCardData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetCommandCardData, 0, v2, v3);
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
        sub_1B6432C(lockButton, v6);
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
    sub_1B64324(lockButton);
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
    sub_1B64324(qpInfoObj);
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
    sub_1B64324(cardSwitchButton);
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

  if ( (byte_49FFB12 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFB12 = 1;
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
  if ( (byte_49FFAE9 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl_o *)sub_1B640C8(&BattleCommandData_TypeInfo, *(_QWORD *)&cardIndex);
    byte_49FFAE9 = 1;
  }
  commandCardList = v4->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_11;
  if ( commandCardList->max_length <= cardIndex )
    goto LABEL_12;
  v6 = commandCardList->m_Items[cardIndex];
  if ( !v6
    || (data = v6->fields.data,
        v8 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, *(_QWORD *)&cardIndex, method),
        BattleCommandData___ctor_42850392(v8, data, 0LL),
        (baseUserServantCommandCodeEntity = v4->fields.baseUserServantCommandCodeEntity) == 0LL)
    || (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) == 0LL )
  {
LABEL_11:
    sub_1B64324(this);
  }
  if ( userCommandCodeIds->max_length <= cardIndex )
LABEL_12:
    sub_1B6432C(this, *(_QWORD *)&cardIndex);
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
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int64_t v10; // x22
  __int64 v11; // x20
  __int64 v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct UserServantCommandCodeEntity_o **p_baseUserServantCommandCodeEntity; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FFAE8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userServantEntity);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFAE8 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !userServantEntity )
    goto LABEL_14;
  v10 = Instance;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !MasterData_object )
LABEL_14:
    sub_1B64324(Instance);
  if ( UserServantCommandCodeMaster__TryGetEntity(
         (UserServantCommandCodeMaster_o *)MasterData_object,
         &entity,
         v10,
         (int)Instance,
         0LL) )
  {
    v15 = (int)entity;
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    this->fields.baseUserServantCommandCodeEntity = entity;
  }
  else
  {
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    v15 = 0;
    this->fields.baseUserServantCommandCodeEntity = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_baseUserServantCommandCodeEntity, v15, v13, v14);
}


void __fastcall CommandCardEquipmentControl__OnClickCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_49FFAFF & 1) == 0 )
  {
    sub_1B640C8(&Method_CommandCardEquipmentControl_OnClickCommandCode__, method);
    byte_49FFAFF = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnClickCommandCode__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickCommandCode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CommandCardEquipmentControl_OnClickCommandCode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnClickEmptyEquip(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_49FFAFE & 1) == 0 )
  {
    sub_1B640C8(&Method_CommandCardEquipmentControl_OnClickEmptyEquip__, method);
    byte_49FFAFE = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnClickEmptyEquip__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickEmptyEquip__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CommandCardEquipmentControl_OnClickEmptyEquip__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnClickSwitchButton(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  UserServantEntity_o *baseUserServantEntity; // x0
  UISprite_o *executeButtonSprite; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  bool v12; // w1
  UnityEngine_Object_o *targetCommandCardData; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v15; // x2
  UnityEngine_GameObject_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FFB11 & 1) == 0 )
  {
    sub_1B640C8(&Method_CommandCardEquipmentControl_OnClickSwitchButton__, method);
    sub_1B640C8(&CommandCardEquipmentControl_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FFB11 = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity, 0, v5, v6);
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
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v9);
      CommandCardEquipmentControl__InitDisplayInfo(this, v10);
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
                v12 = 0;
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
    CommandCardEquipmentControl__SetCommandCardDisplay(this, MarkIndex, v15);
  }
  baseUserServantEntity = (UserServantEntity_o *)this->fields.messageTxtLabelSprite;
  if ( !baseUserServantEntity
    || (v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL),
        (baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(v16, 0LL)) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)baseUserServantEntity,
                                                         0LL)) == 0LL )
  {
LABEL_30:
    sub_1B64324(baseUserServantEntity);
  }
  v12 = 1;
LABEL_27:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v12, 0LL);
  v17 = Method_CommandCardEquipmentControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1B640E0(Method_CommandCardEquipmentControl_OnClickSwitchButton__);
  v18 = (System_Reflection_MethodBase_o *)sub_1B640AC(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnLockCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FFAFA & 1) == 0 )
  {
    sub_1B640C8(&Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__, method);
    byte_49FFAFA = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  ServantStatusBattleListViewItem_o *p_baseUserCommandCodeEntity; // x19
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  Il2CppObject *Entity; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  CommandCardEquipmentControl___c_c *v23; // x8
  UserCommandCodeEntity_o *v24; // x19
  CommonUI_o *v25; // x20
  ServantStatusDialog_EndDelegate_o *_9__105_0; // x21
  Il2CppObject *v27; // x22
  struct CommandCardEquipmentControl___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-50h]

  if ( (byte_49FFB00 & 1) == 0 )
  {
    sub_1B640C8(&Method_CommandCardEquipmentControl_OnLongPushCommandCode__, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__105_0__, v9);
    sub_1B640C8(&CommandCardEquipmentControl___c_TypeInfo, v10);
    byte_49FFB00 = 1;
  }
  if ( this->fields.baseUserCommandCodeEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    p_baseUserCommandCodeEntity = (ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    klass = p_baseUserCommandCodeEntity->klass;
    if ( !p_baseUserCommandCodeEntity->klass )
      goto LABEL_20;
    byval_arg = klass->_1.byval_arg;
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v32.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v31 = v32;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v31, 0LL);
    if ( !v15 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__long___GetEntity(
               v15,
               (int64_t)Instance,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_baseUserCommandCodeEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
    sub_1B6406C(p_baseUserCommandCodeEntity, (int32_t)Entity, v17, v18);
    v19 = Method_CommandCardEquipmentControl_OnLongPushCommandCode__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLongPushCommandCode__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1B640E0(Method_CommandCardEquipmentControl_OnLongPushCommandCode__);
    v20 = (System_Reflection_MethodBase_o *)sub_1B640AC(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = CommandCardEquipmentControl___c_TypeInfo;
    v24 = (UserCommandCodeEntity_o *)p_baseUserCommandCodeEntity->klass;
    v25 = (CommonUI_o *)Instance;
    if ( !CommandCardEquipmentControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl___c_TypeInfo);
      v23 = CommandCardEquipmentControl___c_TypeInfo;
    }
    _9__105_0 = v23->static_fields->__9__105_0;
    if ( !_9__105_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = CommandCardEquipmentControl___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v23->static_fields->__9;
      _9__105_0 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v21, v22);
      ServantStatusDialog_EndDelegate___ctor(
        _9__105_0,
        v27,
        Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__105_0__,
        0LL);
      static_fields = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      static_fields->__9__105_0 = _9__105_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__105_0, (int32_t)_9__105_0, v29, v30);
    }
    if ( !v25 )
LABEL_20:
      sub_1B64324(Instance);
    CommonUI__OpenServantStatusDialog_30357696(v25, 0, v24, _9__105_0, 0LL, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  CommandCardDialog_ClickDelegate_o *v11; // x22
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  const MethodInfo *v14; // x3

  if ( (byte_49FFAFB & 1) == 0 )
  {
    sub_1B640C8(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__, v3);
    sub_1B640C8(&Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__, v4);
    byte_49FFAFB = 1;
  }
  v5 = Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  commandCardDialog = this->fields.commandCardDialog;
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  v11 = (CommandCardDialog_ClickDelegate_o *)sub_1B64314(CommandCardDialog_ClickDelegate_TypeInfo, v9, v10);
  CommandCardDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__,
    v12);
  if ( !commandCardDialog )
    sub_1B64324(v13);
  CommandCardDialog__OpenRemoveEquip(commandCardDialog, nowEquipedUserCommandCodeEntity, v11, v14);
}


void __fastcall CommandCardEquipmentControl__OnReplaceCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_49FFAFC & 1) == 0 )
  {
    sub_1B640C8(&Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__, method);
    byte_49FFAFC = 1;
  }
  if ( this->fields.nowEquipedUserCommandCodeEntity )
  {
    v3 = Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      sub_1B64324(0LL);
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
  const MethodInfo *v8; // x2
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  const MethodInfo *v10; // x2

  if ( (byte_49FFAFD & 1) == 0 )
  {
    sub_1B640C8(&Method_CommandCardEquipmentControl_OnReplaceReset__, method);
    byte_49FFAFD = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnReplaceReset__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CommandCardEquipmentControl_OnReplaceReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity, 0, v5, v6);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_1B64324(v7);
  CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
    this,
    targetCommandCardData->fields._NowKind_k__BackingField,
    v8);
  CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v10);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x27
  System_String_o *v34; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  System_String_o *v36; // x23
  __int64 v37; // x24
  __int64 v38; // x25
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v40; // q0
  int v41; // w24
  struct UserCommandCodeEntity_o *v42; // x8
  __int128 v43; // q0
  UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x22
  __int64 v45; // x0
  __int64 v46; // x0
  CommonUI_o *v47; // x21
  System_String_o *v48; // x22
  System_String_o *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  CommonConfirmDialog_ClickDelegate_o *v52; // x25
  struct UserServantEntity_o *v53; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // x23
  __int64 v55; // x24
  __int64 v56; // x25
  Il2CppObject *Master_object; // x24
  struct UserServantEntity_o *v58; // x8
  int64_t v59; // x25
  UserServantCollectionEntity_o *v60; // x0
  int32_t maxLimitCount; // w25
  struct UserServantEntity_o *v62; // x8
  ServantLimitMaster_o *v63; // x24
  __int64 v64; // x26
  __int64 v65; // x27
  ServantLimitEntity_o *v66; // x23
  struct UserServantEntity_o *v67; // x8
  ServantLimitImageMaster_o *v68; // x26
  int32_t ServantLimitCountSealAfter; // w24
  struct UserCommandCodeEntity_o *v70; // x8
  __int128 v71; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // x25
  Il2CppObject *v73; // x25
  Il2CppObject *v74; // x27
  struct UserCommandCodeEntity_o *v75; // x8
  __int128 v76; // q0
  int64_t v77; // x28
  int64_t v78; // x0
  UserServantCollectionEntity_o *v79; // x0
  int32_t v80; // w28
  struct UserCommandCodeEntity_o *v81; // x8
  __int128 v82; // q0
  ServantLimitMaster_o *v83; // x27
  int64_t v84; // x0
  ServantLimitEntity_o *v85; // x29
  ServantLimitEntity_o *v86; // x27
  struct UserCommandCodeEntity_o *v87; // x8
  __int128 v88; // q0
  ServantLimitImageMaster_o *v89; // x21
  int64_t v90; // x0
  int32_t v91; // w0
  int32_t v92; // w28
  System_String_o *v93; // x21
  __int64 v94; // x22
  __int64 v95; // x1
  int32_t v96; // w2
  int32_t v97; // w3
  __int64 v98; // x26
  int32_t v99; // w2
  int32_t v100; // w3
  __int64 v101; // x26
  int32_t v102; // w2
  int32_t v103; // w3
  __int64 v104; // x23
  int32_t v105; // w2
  int32_t v106; // w3
  __int64 v107; // x23
  int32_t rarity; // w23
  int32_t v109; // w2
  int32_t v110; // w3
  __int64 v111; // x23
  int32_t v112; // w2
  int32_t v113; // w3
  __int64 v114; // x23
  System_String_o *v115; // x21
  __int64 v116; // x8
  __int64 v117; // x0
  CommonUI_o *v118; // x22
  System_String_o *v119; // x23
  System_String_o *v120; // x24
  __int64 v121; // x1
  __int64 v122; // x2
  CommonConfirmDialog_ClickDelegate_o *v123; // x25
  __int64 v124; // x0
  System_String_o *v125; // [xsp+40h] [xbp-150h]
  Il2CppObject *Entity; // [xsp+48h] [xbp-148h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+110h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16

  if ( (byte_49FFAF5 & 1) == 0 )
  {
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, dic);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&object___TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1B640C8(&Rarity_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v20);
    sub_1B640C8(
      &Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__0__,
      v21);
    sub_1B640C8(
      &Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__1__,
      v22);
    sub_1B640C8(&CommandCardEquipmentControl___c__DisplayClass92_0_TypeInfo, v23);
    sub_1B640C8(&StringLiteral_3711/*"COMMAND_CODE_REATTACH_TITLE"*/, v24);
    sub_1B640C8(&StringLiteral_3709/*"COMMAND_CODE_REATTACH_MSG"*/, v25);
    sub_1B640C8(&StringLiteral_3710/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, v26);
    sub_1B640C8(&StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, v27);
    sub_1B640C8(&StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, v28);
    byte_49FFAF5 = 1;
  }
  v29 = sub_1B64314(CommandCardEquipmentControl___c__DisplayClass92_0_TypeInfo, dic, isCommandCardEmpty);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_101;
  *(_QWORD *)(v29 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)this, v31, v32);
  *(_BYTE *)(v29 + 24) = isCommandCardEmpty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3711/*"COMMAND_CODE_REATTACH_TITLE"*/, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3710/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v36 = v34;
    v38 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v37 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v134.fields.currentCryptoKey = v38;
    *(_QWORD *)&v134.fields.fakeValue = v37;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v134, 0LL);
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
      goto LABEL_101;
    v40 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    v41 = Item;
    *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v133.fields.fakeValue = v40;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v132 = v133;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v132, 0LL);
    if ( !dic )
      goto LABEL_101;
    Item = System_Collections_Generic_Dictionary_long__long___get_Item(
             dic,
             Item,
             (const MethodInfo_315E85C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    if ( Item == v41 )
    {
      v42 = this->fields.baseUserCommandCodeEntity;
      if ( v42 )
      {
        v43 = *(_OWORD *)&v42->fields.id.fields.fakeValue;
        baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
        *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v42->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v133.fields.fakeValue = v43;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v131 = v133;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v131, 0LL);
        if ( baseUserServantCommandCodeEntity )
        {
          this->fields._selectedSelfAttachCommandCardIdx_k__BackingField = UserServantCommandCodeEntity__GetUserCommandCodeNumber(
                                                                             baseUserServantCommandCodeEntity,
                                                                             Item,
                                                                             0LL);
          v45 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
          if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
            v45 = sub_1BB5FA4(v45);
          v46 = *(_QWORD *)(*(_QWORD *)(v45 + 192) + 16LL);
          if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
            v46 = sub_1BB5FA4(v46);
          v47 = **(CommonUI_o ***)(v46 + 184);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
          v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, 0LL);
          v52 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v50, v51);
          CommonConfirmDialog_ClickDelegate___ctor(
            v52,
            (Il2CppObject *)v29,
            Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__0__,
            0LL);
          if ( v47 )
          {
            CommonUI__OpenConfirmDecideDlg(v47, v33, v36, v48, v49, v52, 26, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0LL);
            return;
          }
        }
      }
LABEL_101:
      sub_1B64324(Item);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v53 = this->fields.baseUserServantEntity;
  if ( !v53 )
    goto LABEL_101;
  v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
  v56 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
  v55 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v135.fields.currentCryptoKey = v56;
  *(_QWORD *)&v135.fields.fakeValue = v55;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v135, 0LL);
  if ( !v54 )
    goto LABEL_101;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v54,
             Item,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Item = NetworkManager__get_UserId(0LL);
  v58 = this->fields.baseUserServantEntity;
  if ( !v58 )
    goto LABEL_101;
  v59 = Item;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v58->fields.svtId, 0LL);
  if ( !Master_object )
    goto LABEL_101;
  v60 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)Master_object, v59, Item, 0LL);
  if ( v60 )
    maxLimitCount = v60->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v125 = v33;
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v62 = this->fields.baseUserServantEntity;
  if ( !v62 )
    goto LABEL_101;
  v63 = (ServantLimitMaster_o *)Item;
  v65 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
  v64 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v136.fields.currentCryptoKey = v65;
  *(_QWORD *)&v136.fields.fakeValue = v64;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v136, 0LL);
  if ( !v63 )
    goto LABEL_101;
  v66 = ServantLimitMaster__GetEntity(v63, Item, maxLimitCount, 0LL);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v67 = this->fields.baseUserServantEntity;
  if ( !v67 )
    goto LABEL_101;
  v68 = (ServantLimitImageMaster_o *)Item;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v67->fields.svtId, 0LL);
  if ( !v68 )
    goto LABEL_101;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v68, Item, maxLimitCount, 0LL);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v70 = this->fields.baseUserCommandCodeEntity;
  if ( !v70 )
    goto LABEL_101;
  v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
  v72 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
  *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v133.fields.fakeValue = v71;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v130 = v133;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v130, 0LL);
  if ( !dic )
    goto LABEL_101;
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           Item,
           (const MethodInfo_315E85C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v72 )
    goto LABEL_101;
  v73 = DataMasterBase_object__object__int___GetEntity(
          v72,
          Item,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v74 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Item = NetworkManager__get_UserId(0LL);
  v75 = this->fields.baseUserCommandCodeEntity;
  if ( !v75 )
    goto LABEL_101;
  v76 = *(_OWORD *)&v75->fields.id.fields.fakeValue;
  v77 = Item;
  *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v75->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v129.fields.fakeValue = v76;
  v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v129, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v78,
           (const MethodInfo_315E85C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v74 )
    goto LABEL_101;
  v79 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v74, v77, Item, 0LL);
  if ( v79 )
    v80 = v79->fields.maxLimitCount;
  else
    v80 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v81 = this->fields.baseUserCommandCodeEntity;
  if ( !v81 )
    goto LABEL_101;
  v82 = *(_OWORD *)&v81->fields.id.fields.fakeValue;
  v83 = (ServantLimitMaster_o *)Item;
  *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v81->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v133.fields.fakeValue = v82;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v128 = v133;
  v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v128, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v84,
           (const MethodInfo_315E85C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v83 )
    goto LABEL_101;
  v85 = v66;
  v86 = ServantLimitMaster__GetEntity(v83, Item, v80, 0LL);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v87 = this->fields.baseUserCommandCodeEntity;
  if ( !v87 )
    goto LABEL_101;
  v88 = *(_OWORD *)&v87->fields.id.fields.fakeValue;
  v89 = (ServantLimitImageMaster_o *)Item;
  *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v87->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v127.fields.fakeValue = v88;
  v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v127, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v90,
           (const MethodInfo_315E85C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v89 )
    goto LABEL_101;
  v91 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v89, Item, v80, 0LL);
  if ( v66 && Entity && v73 && v86 )
  {
    v92 = v91;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v93 = LocalizationManager__Get((System_String_o *)StringLiteral_3709/*"COMMAND_CODE_REATTACH_MSG"*/, 0LL);
    v94 = sub_1B64170(object___TypeInfo, 6LL);
    Item = (__int64)ServantEntity__getName((ServantEntity_o *)Entity, ServantLimitCountSealAfter, -1, 0LL);
    if ( !v94 )
      goto LABEL_101;
    v98 = Item;
    if ( !Item || (Item = sub_1B64204(Item, *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v94 + 24) )
        goto LABEL_102;
      *(_QWORD *)(v94 + 32) = v98;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v94 + 32), v98, v96, v97);
      Item = (__int64)ServantEntity__getName((ServantEntity_o *)v73, v92, -1, 0LL);
      v101 = Item;
      if ( !Item || (Item = sub_1B64204(Item, *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v94 + 24) <= 1u )
          goto LABEL_102;
        *(_QWORD *)(v94 + 40) = v101;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v94 + 40), v101, v99, v100);
        Item = (__int64)ServantEntity__getClassName((ServantEntity_o *)Entity, 0LL);
        v104 = Item;
        if ( !Item || (Item = sub_1B64204(Item, *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v94 + 24) <= 2u )
            goto LABEL_102;
          *(_QWORD *)(v94 + 48) = v104;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v94 + 48), v104, v102, v103);
          Item = (__int64)ServantEntity__getClassName((ServantEntity_o *)v73, 0LL);
          v107 = Item;
          if ( !Item || (Item = sub_1B64204(Item, *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v94 + 24) <= 3u )
              goto LABEL_102;
            *(_QWORD *)(v94 + 56) = v107;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v94 + 56), v107, v105, v106);
            rarity = v85->fields.rarity;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            Item = (__int64)Rarity__getRarityType(rarity, 0LL);
            v111 = Item;
            if ( !Item || (Item = sub_1B64204(Item, *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v94 + 24) <= 4u )
                goto LABEL_102;
              *(_QWORD *)(v94 + 64) = v111;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v94 + 64), v111, v109, v110);
              Item = (__int64)Rarity__getRarityType(v86->fields.rarity, 0LL);
              v114 = Item;
              if ( !Item || (Item = sub_1B64204(Item, *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v94 + 24) > 5u )
                {
                  *(_QWORD *)(v94 + 72) = v114;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v94 + 72), v114, v112, v113);
                  v115 = System_String__Format_61389904(v93, (System_Object_array *)v94, 0LL);
                  v116 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
                  if ( (*(_BYTE *)(v116 + 309) & 1) == 0 )
                    v116 = sub_1BB5FA4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4));
                  v117 = *(_QWORD *)(*(_QWORD *)(v116 + 192) + 16LL);
                  if ( (*(_BYTE *)(v117 + 309) & 1) == 0 )
                    v117 = sub_1BB5FA4(v117);
                  v118 = **(CommonUI_o ***)(v117 + 184);
                  v119 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v123 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v121,
                                                                  v122);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v123,
                    (Il2CppObject *)v29,
                    Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__1__,
                    0LL);
                  if ( !v118 )
                    goto LABEL_101;
                  CommonUI__OpenConfirmDecideDlg(
                    v118,
                    v125,
                    v115,
                    v119,
                    v120,
                    v123,
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
                sub_1B6432C(Item, v95);
              }
            }
          }
        }
      }
    }
    v124 = sub_1B64348(Item);
    sub_1B641F0(v124, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OpenLockDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  void *monitor; // x8
  BattleCommandData_o *v6; // x0
  bool IsEnableCommandCode; // w20
  CommandCardDialog_o *klass; // x21
  CommandCardDialog_ClickDelegate_o *v9; // x22
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3

  v3 = (Il2CppObject *)this;
  if ( (byte_49FFAF7 & 1) == 0 )
  {
    sub_1B640C8(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    this = (CommandCardEquipmentControl_o *)sub_1B640C8(
                                              &Method_CommandCardEquipmentControl__OpenLockDialog_b__94_0__,
                                              v4);
    byte_49FFAF7 = 1;
  }
  monitor = v3[31].monitor;
  if ( !monitor
    || ((v6 = (BattleCommandData_o *)*((_QWORD *)monitor + 46)) == 0LL
      ? (IsEnableCommandCode = 0)
      : (IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(v6, 0LL)),
        klass = (CommandCardDialog_o *)v3[24].klass,
        v9 = (CommandCardDialog_ClickDelegate_o *)sub_1B64314(CommandCardDialog_ClickDelegate_TypeInfo, method, v2),
        CommandCardDialog_ClickDelegate___ctor(
          v9,
          v3,
          Method_CommandCardEquipmentControl__OpenLockDialog_b__94_0__,
          v10),
        !klass) )
  {
    sub_1B64324(this);
  }
  CommandCardDialog__OpenLockEquipSlot(klass, IsEnableCommandCode, v9, v11);
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
  CommandCardDialog_ClickDelegate_o *v10; // x23
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4

  if ( (byte_49FFAF8 & 1) == 0 )
  {
    sub_1B640C8(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_CommandCardEquipmentControl__OpenReturnDialog_b__95_0__, v3);
    byte_49FFAF8 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v10 = (CommandCardDialog_ClickDelegate_o *)sub_1B64314(CommandCardDialog_ClickDelegate_TypeInfo, v8, v9),
        CommandCardDialog_ClickDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenReturnDialog_b__95_0__,
          v11),
        !commandCardDialog) )
  {
    sub_1B64324(targetCommandCardData);
  }
  CommandCardDialog__OpenLockCommandCardResult(commandCardDialog, baseUserServantEntity, MarkIndex, v10, v12);
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
  CommandCardDialog_ClickDelegate_o *v10; // x23
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4

  if ( (byte_49FFAF6 & 1) == 0 )
  {
    sub_1B640C8(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_CommandCardEquipmentControl__OpenUnlockDialog_b__93_0__, v3);
    byte_49FFAF6 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v10 = (CommandCardDialog_ClickDelegate_o *)sub_1B64314(CommandCardDialog_ClickDelegate_TypeInfo, v8, v9),
        CommandCardDialog_ClickDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenUnlockDialog_b__93_0__,
          v11),
        !commandCardDialog) )
  {
    sub_1B64324(targetCommandCardData);
  }
  CommandCardDialog__OpenUnlockCommandCardEquipment(commandCardDialog, baseUserServantEntity, MarkIndex, v10, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayEquipEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  char *AttachEffectOnCode; // x0
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  CommandCodeEffectComponent_o *v9; // x19
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t v12; // w0
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  CommandCodeEffectComponent_o *v17; // x22
  struct CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x8
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_49FFB09 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&targetCardIdx);
    byte_49FFB09 = 1;
  }
  AttachEffectOnCode = (char *)CommandCardEquipmentControl__CreateAttachEffectOnCode(
                                 this,
                                 *(const MethodInfo **)&targetCardIdx);
  baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_14;
  v9 = (CommandCodeEffectComponent_o *)AttachEffectOnCode;
  v11 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v21, 0LL);
  AttachEffectOnCode = (char *)CommandCardEquipmentControl__CreateAttachEffectOnCard(this, targetCardIdx, v12, v13);
  if ( !AttachEffectOnCode )
    goto LABEL_14;
  v17 = (CommandCodeEffectComponent_o *)AttachEffectOnCode;
  if ( callback )
  {
    *((_QWORD *)AttachEffectOnCode + 26) = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(AttachEffectOnCode + 208), (int32_t)callback, v15, v16);
  }
  AttachEffectOnCode = (char *)this->fields.commandCardEquipmentIcon;
  if ( !AttachEffectOnCode
    || (CombineCommandCardEquipmentComponent__HideStatusInfo(
          (CombineCommandCardEquipmentComponent_o *)AttachEffectOnCode,
          v14),
        (commandCardEquipmentIcon = this->fields.commandCardEquipmentIcon) == 0LL)
    || (AttachEffectOnCode = (char *)commandCardEquipmentIcon->fields.equippedInfo) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AttachEffectOnCode, 0, 0LL), !v9) )
  {
LABEL_14:
    sub_1B64324(AttachEffectOnCode);
  }
  CommandCodeEffectComponent__PlayAnimation(v9, v19);
  CommandCodeEffectComponent__PlayAnimation(v17, v20);
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
  __int64 Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Component_o *v13; // x19
  __int64 v14; // x1
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v16; // x21
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x20
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x20
  const MethodInfo *v21; // x1

  if ( (byte_49FFB08 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&lockCardIdx);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FFB08 = 1;
  }
  lockEffect = (Il2CppObject *)this->fields.lockEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                lockEffect,
                                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_20;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Component_object,
                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_20;
  v13 = (UnityEngine_Component_o *)Component_object;
  if ( callback )
  {
    *(_QWORD *)(Component_object + 208) = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(Component_object + 208), (int32_t)callback, v11, v12);
  }
  Component_object = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_20;
  if ( commandCardList->max_length <= lockCardIdx )
    sub_1B6432C(Component_object, v14);
  v16 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (__int64)commandCardList->m_Items[lockCardIdx];
  if ( !Component_object )
    goto LABEL_20;
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
  if ( !v16 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7111 )
  {
    Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F7111 = 1;
  }
  if ( !v18 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  v20 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7116 )
  {
    Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v19);
    byte_49F7116 = 1;
  }
  if ( !v20 )
LABEL_20:
    sub_1B64324(Component_object);
  UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v13, v21);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int64 v21; // x22
  __int64 v22; // x23
  int32_t v23; // w0
  const MethodInfo *v24; // x3
  CommandCodeEffectComponent_o *v25; // x0
  Il2CppObject *commandCodeDetachEffect; // x23
  CommandCodeEffectComponent_o *v27; // x22
  UnityEngine_GameObject_o *v28; // x23
  __int64 v29; // x1
  UnityEngine_Transform_o *v30; // x24
  __int64 v31; // x1
  UnityEngine_Transform_o *v32; // x24
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  int32_t v38; // w3
  System_Action_o *v39; // x24
  const MethodInfo *v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_49FFB0A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&targetCardIdx);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__0__, v11);
    sub_1B640C8(&Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__1__, v12);
    sub_1B640C8(&CommandCardEquipmentControl___c__DisplayClass124_0_TypeInfo, v13);
    byte_49FFB0A = 1;
  }
  v14 = sub_1B64314(CommandCardEquipmentControl___c__DisplayClass124_0_TypeInfo, *(_QWORD *)&targetCardIdx, callback);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_27;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v14 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)callback, v18, v19);
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  if ( !nowEquipedUserCommandCodeEntity )
    goto LABEL_27;
  v22 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v22;
  *(_QWORD *)&v46.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
  v25 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(this, targetCardIdx, v23, v24);
  commandCodeDetachEffect = (Il2CppObject *)this->fields.commandCodeDetachEffect;
  v27 = v25;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeDetachEffect,
                                                   (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_27;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_27;
  v28 = Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !Component_object )
    goto LABEL_27;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.detachEffectPos, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)v28,
                                                   0LL);
  v30 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7111 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v29);
    byte_49F7111 = 1;
  }
  if ( !v30 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)v28,
                                                   0LL);
  v32 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7116 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v31);
    byte_49F7116 = 1;
  }
  if ( !v32 )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale(v32, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v35 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v33, v34);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v14,
    Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__0__,
    0LL);
  if ( v35 )
  {
    v28[9].klass = (UnityEngine_GameObject_c *)v35;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28[9], (int32_t)v35, v37, v38);
  }
  v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v37);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v14,
    Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__1__,
    0LL);
  if ( v39 )
  {
    *(_QWORD *)&v28[8].fields.m_CachedPtr = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28[8].fields, (int32_t)v39, v41, v42);
  }
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_27;
  if ( commandCardList->max_length <= targetCardIdx )
    sub_1B6432C(Component_object, v40);
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCardIdx];
  if ( !Component_object
    || (CombineCommandCardComponent__HideCommandCodeSprite((CombineCommandCardComponent_o *)Component_object, v40),
        CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v28, v44),
        !v27) )
  {
LABEL_27:
    sub_1B64324(Component_object);
  }
  CommandCodeEffectComponent__PlayAnimation(v27, v45);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49FFB0B & 1) == 0 )
  {
    sub_1B640C8(&CommandCardEquipmentControl__PlayReplaceEffect_d__125_TypeInfo, *(_QWORD *)&targetCardIdx);
    byte_49FFB0B = 1;
  }
  v7 = sub_1B64314(CommandCardEquipmentControl__PlayReplaceEffect_d__125_TypeInfo, *(_QWORD *)&targetCardIdx, callback);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = targetCardIdx;
  *(_QWORD *)(v7 + 48) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)callback, v10, v11);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FFB0C & 1) == 0 )
  {
    sub_1B640C8(&CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_TypeInfo, *(_QWORD *)&removeCardIdx);
    byte_49FFB0C = 1;
  }
  v9 = sub_1B64314(
         CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_TypeInfo,
         *(_QWORD *)&removeCardIdx,
         *(_QWORD *)&attachCardIdx);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 40) = removeCardIdx;
  *(_DWORD *)(v9 + 44) = attachCardIdx;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)callback, v12, v13);
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
  __int64 Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Component_o *v13; // x21
  const MethodInfo *v14; // x1
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v16; // x22
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x22
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x22
  struct CombineCommandCardComponent_array *v21; // x8
  const MethodInfo *v22; // x1

  if ( (byte_49FFB07 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&unlockCardIdx);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FFB07 = 1;
  }
  unlockEffect = (Il2CppObject *)this->fields.unlockEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                unlockEffect,
                                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Component_object,
                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_23;
  v13 = (UnityEngine_Component_o *)Component_object;
  if ( callback )
  {
    *(_QWORD *)(Component_object + 208) = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(Component_object + 208), (int32_t)callback, v11, v12);
  }
  Component_object = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_23;
  if ( commandCardList->max_length <= unlockCardIdx )
    goto LABEL_24;
  v16 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (__int64)commandCardList->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
  if ( !v16 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7111 )
  {
    Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F7111 = 1;
  }
  if ( !v18 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  v20 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7116 )
  {
    Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v19);
    byte_49F7116 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (v21 = this->fields.commandCardList) == 0LL) )
  {
LABEL_23:
    sub_1B64324(Component_object);
  }
  if ( v21->max_length <= unlockCardIdx )
LABEL_24:
    sub_1B6432C(Component_object, v14);
  Component_object = (__int64)v21->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_23;
  CombineCommandCardComponent__HideUnlockInfo((CombineCommandCardComponent_o *)Component_object, v14);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v13, v22);
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
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Component_o *messageTxtLabelSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 transformTotal; // x1
  struct System_String_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  struct System_String_array *v25; // x20
  unsigned __int64 v26; // x21
  __int64 v27; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v29; // w22
  __int64 v30; // x23
  __int64 v31; // x24
  int32_t v32; // w23
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_Action_o *v36; // x21
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_49FFAEC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&AssetManager_TypeInfo, v5);
    sub_1B640C8(&Method_CommandCardEquipmentControl_SetCommandCardList__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1B640C8(&string___TypeInfo, v9);
    byte_49FFAEC = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_37486440(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v11, v12);
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
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, v15);
  if ( this->fields.baseUserServantEntity )
  {
    this->fields.LoadAfterCallback = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.LoadAfterCallback, (int32_t)callback, v17, v18);
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
    v20 = (struct System_String_array *)sub_1B64170(string___TypeInfo, transformTotal);
    this->fields.assetList = v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetList, (int32_t)v20, v21, v22);
    v25 = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v26 = 0LL;
      v27 = 32LL;
      while ( 1 )
      {
        messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
        if ( !messageTxtLabelSprite )
          break;
        messageTxtLabelSprite = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantId(
                                                             (UserServantEntity_o *)messageTxtLabelSprite,
                                                             v26,
                                                             0LL);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v29 = (int)messageTxtLabelSprite;
        v31 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v30 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v38.fields.currentCryptoKey = v31;
        *(_QWORD *)&v38.fields.fakeValue = v30;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v38, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        messageTxtLabelSprite = (UnityEngine_Component_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                             v29,
                                                             v32,
                                                             0LL);
        if ( !v25 )
          break;
        if ( v26 >= v25->max_length )
          sub_1B6432C(messageTxtLabelSprite, v33);
        *(Il2CppClass **)((char *)&v25->obj.klass + v27) = (Il2CppClass *)messageTxtLabelSprite;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v25 + v27), (int32_t)messageTxtLabelSprite, v34, v35);
        v25 = this->fields.assetList;
        ++v26;
        v27 += 8LL;
        if ( (__int64)v26 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1B64324(messageTxtLabelSprite);
    }
LABEL_30:
    v36 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_CommandCardEquipmentControl_SetCommandCardList__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37484096(v25, v36, 1, 0LL);
  }
  else
  {
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, v16);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  DataManager_o *Instance; // x0
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  ServantLimitImageMaster_o *v15; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v18; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_37591604; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49FFAE7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userServantEntity);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FFAE7 = 1;
  }
  this->fields.baseUserServantEntity = userServantEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  CommandCardEquipmentControl__MoidfyUserSvtCommandCode(this, userServantEntity, v9);
  if ( !userServantEntity )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v15 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
  if ( !v15 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v15,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v18 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_37591604 = CharaGraphManager__CreateTexturePrefab_37591604(
                               this->fields.charaGraphBase,
                               userServantEntity,
                               v18,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_37591604;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph,
      (int32_t)TexturePrefab_37591604,
      v21,
      v22);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1B64324(Instance);
  UICharaGraphTexture__SetCharacter_40502984((UICharaGraphTexture_o *)Instance, userServantEntity, v18, 0LL, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__SetCommandCardDisplay(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct CombineCommandCardComponent_array *v11; // x8
  struct CombineCommandCardComponent_o *v12; // x1
  const MethodInfo *v13; // x2
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  const MethodInfo *v15; // x2

  if ( (index & 0x80000000) == 0 )
  {
    commandCardList = this->fields.commandCardList;
    if ( !commandCardList )
      goto LABEL_9;
    if ( (signed int)commandCardList->max_length > index )
    {
      this->fields.baseUserCommandCodeEntity = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity, 0, (int32_t)method, v3);
      CommandCardEquipmentControl__SetTargetIndexSelectSprite(this, index, v7);
      v11 = this->fields.commandCardList;
      if ( v11 )
      {
        if ( v11->max_length <= index )
          sub_1B6432C(this, v8);
        v12 = v11->m_Items[index];
        this->fields.targetCommandCardData = v12;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetCommandCardData, (int32_t)v12, v9, v10);
        targetCommandCardData = this->fields.targetCommandCardData;
        if ( targetCommandCardData )
        {
          CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
            this,
            targetCommandCardData->fields._NowKind_k__BackingField,
            v13);
          CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v15);
          return;
        }
      }
LABEL_9:
      sub_1B64324(this);
    }
  }
}


void __fastcall CommandCardEquipmentControl__SetCommandCardEquipmentSkill(
        CommandCardEquipmentControl_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  CommandCardEquipmentControl_o *v3; // x19
  __int64 v4; // x1
  CommandCardEquipmentControl_o *v5; // x20
  System_String_array *explanationList; // [xsp+0h] [xbp-30h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-28h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-18h] BYREF

  explanationList = 0LL;
  titleList = 0LL;
  if ( !userCommandCode )
    goto LABEL_9;
  v3 = this;
  UserCommandCodeEntity__GetSkillInfo(userCommandCode, &idList, &titleList, &explanationList, 0LL);
  this = (CommandCardEquipmentControl_o *)SkillInfo__GetMargeExplanation_40191376(explanationList, 0LL);
  if ( !idList )
    goto LABEL_9;
  if ( !idList->max_length )
    goto LABEL_10;
  v5 = this;
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillIcon;
  if ( !this || (SkillIconComponent__Set_37921136((SkillIconComponent_o *)this, idList->m_Items[1], 1, 0LL), !titleList) )
LABEL_9:
    sub_1B64324(this);
  if ( !titleList->max_length )
LABEL_10:
    sub_1B6432C(this, v4);
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillName;
  if ( !this )
    goto LABEL_9;
  UILabel__set_text((UILabel_o *)this, titleList->m_Items[0], 0LL);
  WrapControlText__textBBCodeAdjust(v3->fields.commandCardEquipmentSkillDetail, (System_String_o *)v5, 22, 0, 0, 0LL);
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
  __int64 baseUserServantEntity; // x0
  int32_t v14; // w20
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  Il2CppObject *v17; // x22
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v19; // x24
  struct UserServantEntity_o *v20; // x8
  int64_t v21; // x25
  __int64 v22; // x26
  __int64 v23; // x27
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformTotal; // w8
  float v26; // s1
  float v27; // s0
  int v28; // s2
  __int64 v29; // x11
  float v30; // s0
  const MethodInfo *v31; // x1
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v33; // x8
  unsigned __int64 v34; // x29
  __int64 v35; // x28
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  int32_t v38; // w26
  struct CombineCommandCardComponent_array *v39; // x8
  CombineCommandCardComponent_o *v40; // x24
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x1
  __int64 v44; // x2
  BattleCommandData_o *v45; // x25
  const MethodInfo *v46; // x6
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  Il2CppObject *v49; // x23
  __int64 v50; // x21
  __int64 v51; // x26
  struct System_Int64_array *v52; // x8
  int64_t v53; // x2
  struct System_Int32_array *commandCardParam; // x8
  int32_t v55; // w3
  const MethodInfo *v56; // x1
  float v57; // s3
  float v58; // s0
  float v59; // s1
  float v60; // s2
  const MethodInfo *v61; // x1
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_Action_o *LoadAfterCallback; // x20
  int32_t limitCount; // [xsp+4h] [xbp-7Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_49FFAED & 1) == 0 )
  {
    sub_1B640C8(&BattleCommandData_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FFAED = 1;
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
  v14 = baseUserServantEntity;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  limitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                 v14,
                 LimitCountByImageLimitCostumeIn,
                 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  v17 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
          v14,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseUserServantEntity,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)baseUserServantEntity,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  baseUserServantEntity = NetworkManager__get_UserId(0LL);
  v20 = this->fields.baseUserServantEntity;
  if ( !v20 )
    goto LABEL_66;
  v21 = baseUserServantEntity;
  v23 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v67.fields.currentCryptoKey = v23;
  *(_QWORD *)&v67.fields.fakeValue = v22;
  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v67, 0LL);
  if ( !v19 )
    goto LABEL_66;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)v19,
    &entity,
    v21,
    (int)baseUserServantEntity,
    0LL);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_66;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL);
  transformTotal = this->fields.transformTotal;
  v26 = -18.0;
  if ( transformTotal <= 1 )
    v26 = -15.5;
  v27 = transformTotal <= 1 ? -258.0 : -270.0;
  v28 = 0;
  GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)(&v26 - 1), 0LL);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_66;
  v29 = *(_QWORD *)baseUserServantEntity;
  v30 = 130.0;
  if ( this->fields.transformTotal > 1 )
    v30 = 135.0;
  *(float *)(baseUserServantEntity + 48) = v30;
  baseUserServantEntity = (*(__int64 (**)(void))(v29 + 440))();
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_66;
  v33 = *(_QWORD *)&commandCardList->max_length;
  if ( (int)v33 >= 1 )
  {
    if ( v17 )
    {
      v34 = 0LL;
      v35 = (unsigned int)v33;
      while ( 1 )
      {
        klass = v17[9].klass;
        if ( klass )
        {
          namespaze_low = LODWORD(klass->_1.namespaze);
          if ( (__int64)v34 < (int)namespaze_low )
          {
            if ( v34 >= namespaze_low )
              goto LABEL_67;
            v38 = *((_DWORD *)&klass->_1.byval_arg.data + v34);
            if ( (unsigned int)(v38 - 1) <= 2 )
            {
              v39 = this->fields.commandCardList;
              if ( !v39 )
                break;
              if ( v34 >= v39->max_length )
                goto LABEL_67;
              v40 = v39->m_Items[v34];
              baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( !v40 )
                break;
              v40->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->fields.target, baseUserServantEntity, v41, v42);
              v45 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v43, v44);
              BattleCommandData___ctor_42850076(v45, v38, v14, limitCount, 0, -1, 0LL);
              if ( !v45 )
                break;
              v45->fields.markindex = v34;
              v45->fields.servantCardIdsIndex = v34;
              baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
              if ( baseUserServantCommandCodeEntity )
              {
                userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !userCommandCodeIds )
                  break;
                if ( v34 >= userCommandCodeIds->max_length )
LABEL_67:
                  sub_1B6432C(baseUserServantEntity, v31);
                v31 = (const MethodInfo *)userCommandCodeIds->m_Items[v34];
                v45->fields.userCommandCodeId = (int64_t)v31;
                if ( (__int64)v31 >= 1 )
                {
                  if ( !MasterData_object )
                    break;
                  v49 = MasterData_object;
                  baseUserServantEntity = (__int64)DataMasterBase_object__object__long___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                     (int64_t)v31,
                                                     (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
                  if ( !baseUserServantEntity )
                    break;
                  v50 = *(_QWORD *)(baseUserServantEntity + 80);
                  v51 = *(_QWORD *)(baseUserServantEntity + 88);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v68.fields.currentCryptoKey = v50;
                  *(_QWORD *)&v68.fields.fakeValue = v51;
                  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v68, 0LL);
                  v45->fields.commandCodeId = baseUserServantEntity;
                  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
                  MasterData_object = v49;
                  if ( !baseUserServantCommandCodeEntity )
                    break;
                }
                v52 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !v52 )
                  break;
                if ( v34 >= v52->max_length )
                  goto LABEL_67;
                v53 = v52->m_Items[v34];
              }
              else
              {
                v53 = -1LL;
              }
              if ( entity && (commandCardParam = entity->fields.commandCardParam) != 0LL )
              {
                if ( v34 >= commandCardParam->max_length )
                  goto LABEL_67;
                v55 = commandCardParam->m_Items[v34 + 1];
              }
              else
              {
                v55 = 0;
              }
              v45->fields.commandCardParam = v55;
              CombineCommandCardComponent__DispCommandCard(v40, v45, v53, v55, 0, 0, v46);
              v57 = 1.0;
              if ( this->fields.displayTransformIndex <= 0 )
                v58 = 1.0;
              else
                v58 = 0.5;
              v59 = v58;
              v60 = v58;
              CombineCommandCardComponent__SetColor(v40, *(UnityEngine_Color_o *)(&v57 - 3), v56);
              CombineCommandCardComponent__SetLayout(v40, this->fields.positionOffsetY, this->fields.scaleOffset, v61);
            }
          }
        }
        if ( v35 == ++v34 )
          goto LABEL_63;
      }
    }
LABEL_66:
    sub_1B64324(baseUserServantEntity);
  }
LABEL_63:
  CommandCardEquipmentControl__SetExecuteButtonState(this, v31);
  LoadAfterCallback = this->fields.LoadAfterCallback;
  if ( LoadAfterCallback )
  {
    this->fields.LoadAfterCallback = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.LoadAfterCallback, 0, v62, v63);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))LoadAfterCallback->fields.m_target)(
      LoadAfterCallback->fields.original_method_info,
      *(_QWORD *)&LoadAfterCallback->fields.extra_arg);
  }
}


void __fastcall CommandCardEquipmentControl__SetEffectAfterInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *qpInfoObj; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  CommandCardEquipmentControl__InitCommandCodeInfo(this, method);
  qpInfoObj = this->fields.qpInfoObj;
  if ( !qpInfoObj
    || (UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL),
        (qpInfoObj = (UnityEngine_GameObject_o *)this->fields.lockButton) == 0LL)
    || (qpInfoObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)qpInfoObj, 0LL)) == 0LL )
  {
    sub_1B64324(qpInfoObj);
  }
  UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL);
  CommandCardEquipmentControl__InitCommandCardSelectStatus(this, v4);
  CommandCardEquipmentControl__InitDisplayInfo(this, v5);
  CommandCardEquipmentControl__UpdateItemLinkListWindowButton(this, v6);
}


void __fastcall CommandCardEquipmentControl__SetExecuteButtonState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *targetCommandCardData; // x20
  struct UICommonButton_o *executeButton; // x0
  struct CombineCommandCardComponent_o *v6; // x20
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

  if ( (byte_49FFB02 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_49FFB02 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
  if ( ((unsigned __int8)executeButton & 1) != 0 )
  {
    v6 = this->fields.targetCommandCardData;
    if ( !v6 )
      goto LABEL_32;
    if ( v6->fields._NowKind_k__BackingField == 1 )
    {
      v7 = this->fields.baseUserCommandCodeEntity == 0LL;
      goto LABEL_21;
    }
  }
  else
  {
    v6 = this->fields.targetCommandCardData;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
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
    v7 = userCommandCodeId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v15, 0LL);
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
    sub_1B64324(executeButton);
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
  UILabel_o *haveQpLabel; // x20

  if ( (byte_49FFB01 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, method);
    byte_49FFB01 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLabel = this->fields.haveQpLabel,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62180668((int)this + 524, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL),
        !haveQpLabel) )
  {
    sub_1B64324(SelfUserGame);
  }
  UILabel__set_text(haveQpLabel, SelfUserGame, 0LL);
}


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
    sub_1B64324(removeButton);
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
    sub_1B64324(replaceButton);
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
    sub_1B64324(overwriteWarningLabel);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  BattleCommandData_o *data; // x0
  int v15; // w26
  struct CombineCommandCardComponent_o *v16; // x8
  struct BattleCommandData_o *v17; // x8
  __int128 v18; // q0
  int64_t userCommandCodeId; // x23
  struct CombineCommandCardComponent_o *v20; // x8
  struct BattleCommandData_o *v21; // x8
  __int128 v22; // q0
  int64_t v23; // x22
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x5
  struct CombineCommandCardComponent_o *v26; // x8
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  int max_length; // w9
  int v30; // w27
  il2cpp_array_size_t v31; // w28
  struct System_Int64_array *v32; // x8
  int64_t v33; // x25
  __int64 v34; // x23
  __int64 v35; // x24
  char v36; // w23
  int32_t v37; // w24
  struct UserServantCommandCodeEntity_o *v38; // x8
  __int128 v39; // q0
  const MethodInfo *v40; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_49FFAF1 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCode);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_49FFAF1 = 1;
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
    v15 = 0;
    if ( userCommandCode && (commandCardInfoObj & 1) != 0 )
    {
      v16 = this->fields.targetCommandCardData;
      if ( !v16 )
        goto LABEL_57;
      v17 = v16->fields.data;
      if ( !v17 )
        goto LABEL_57;
      v18 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      userCommandCodeId = v17->fields.userCommandCodeId;
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v44.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v43 = v44;
      commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v43, 0LL);
      v15 = userCommandCodeId != commandCardInfoObj;
      if ( dispEquippedInfo )
      {
        v20 = this->fields.targetCommandCardData;
        if ( !v20 )
          goto LABEL_57;
        v21 = v20->fields.data;
        if ( !v21 )
          goto LABEL_57;
        v22 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
        v23 = v21->fields.userCommandCodeId;
        *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v44.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v42 = v44;
        dispEquippedInfo = v23 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v42, 0LL);
      }
      else
      {
        dispEquippedInfo = 0;
      }
    }
  }
  else
  {
    v15 = 0;
  }
  this->fields.baseUserCommandCodeEntity = userCommandCode;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity,
    (int32_t)userCommandCode,
    v11,
    v12);
  v26 = this->fields.targetCommandCardData;
  if ( !v26 )
    goto LABEL_57;
  if ( ((v26->fields._NowKind_k__BackingField == 2) & ~v15) != 0 )
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
        goto LABEL_57;
      max_length = userCommandCodeIds->max_length;
      v30 = max_length - 1;
      if ( max_length >= 1 )
      {
        v31 = 0;
        while ( 1 )
        {
          v32 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
          if ( !v32 )
            goto LABEL_57;
          if ( v31 >= v32->max_length )
            sub_1B6432C(commandCardInfoObj, v24);
          v33 = v32->m_Items[v31];
          v35 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v45.fields.currentCryptoKey = v35;
          *(_QWORD *)&v45.fields.fakeValue = v34;
          commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
          v36 = v33 == (int)commandCardInfoObj;
          LODWORD(baseUserServantCommandCodeEntity) = 1;
          if ( v33 == (int)commandCardInfoObj || v30 == v31 )
            goto LABEL_46;
          baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
          ++v31;
          if ( !baseUserServantCommandCodeEntity )
            goto LABEL_57;
        }
      }
      v36 = 0;
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
LABEL_46:
  v37 = equippedSvtId;
  if ( (unsigned int)baseUserServantCommandCodeEntity | v15 )
  {
    CommandCardEquipmentControl__SetReplaceDispInfo(this, v24);
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
  v38 = this->fields.baseUserServantCommandCodeEntity;
  if ( v38 )
  {
    v39 = *(_OWORD *)&v38->fields.svtId.fields.fakeValue;
    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v38->fields.svtId.fields.currentCryptoKey;
    *(_OWORD *)&v44.fields.fakeValue = v39;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v41 = v44;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v41, 0LL) == equippedSvtId )
      v37 = -1;
  }
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentIcon;
  if ( !commandCardInfoObj )
LABEL_57:
    sub_1B64324(commandCardInfoObj);
  CombineCommandCardEquipmentComponent__SetIcon(
    (CombineCommandCardEquipmentComponent_o *)commandCardInfoObj,
    userCommandCode,
    v36,
    dispEquippedInfo,
    v37,
    v25);
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

  if ( (byte_49FFB03 & 1) == 0 )
  {
    sub_1B640C8(&CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_3632/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, v8);
    sub_1B640C8(&StringLiteral_3629/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, v9);
    sub_1B640C8(&StringLiteral_3630/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/, v10);
    sub_1B640C8(&StringLiteral_3636/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, v11);
    sub_1B640C8(&StringLiteral_3634/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, v12);
    sub_1B640C8(&StringLiteral_3633/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/, v13);
    sub_1B640C8(&StringLiteral_12054/*"SHORT_ITEM_INFO_MSG"*/, v14);
    sub_1B640C8(&StringLiteral_3638/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/, v15);
    sub_1B640C8(&StringLiteral_12055/*"SHORT_QP_INFO_MSG"*/, v16);
    sub_1B640C8(&StringLiteral_3635/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/, v17);
    sub_1B640C8(&StringLiteral_1/*""*/, v18);
    byte_49FFB03 = 1;
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
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3629/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, 0LL);
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
      v24 = &StringLiteral_3630/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/;
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
                                                        (System_String_o *)StringLiteral_3635/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
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
          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3634/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, 0LL);
          goto LABEL_102;
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3636/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/,
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
          v28 = &StringLiteral_12055/*"SHORT_QP_INFO_MSG"*/;
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
          v28 = &StringLiteral_12054/*"SHORT_ITEM_INFO_MSG"*/;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v28 = &StringLiteral_3638/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/;
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
                                                        (System_String_o *)StringLiteral_3634/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/,
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
        sub_1B64324(executeButtonSprite);
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
      executeButtonSprite = (UnityEngine_Color_o **)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                      &v50,
                                                      0LL);
      v32 = this->fields.baseUserCommandCodeEntity;
      if ( !v32 )
        goto LABEL_104;
      v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      v34 = executeButtonSprite;
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v49.fields.fakeValue = v33;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3635/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/, 0LL);
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
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3632/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, 0LL);
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
      v24 = &StringLiteral_3633/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/;
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
        sub_1B6432C(this, *(_QWORD *)&index);
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
    sub_1B64324(this);
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
  int64_t Instance; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  ServantCommandCodeUnlockMaster_o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w21
  UILabel_o *spendQpLabel; // x21
  int64_t v14; // x20
  const MethodInfo *v15; // x1
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  __int64 v17; // x21
  __int64 max_length; // x9
  __int64 v19; // x10
  __int64 v20; // x24
  __int64 v21; // x25
  unsigned __int64 v22; // x22
  __int64 v23; // x26
  __int64 v24; // x27
  __int64 v25; // x28
  bool v26; // w9
  Il2CppClass **v27; // x8
  LimitCntUpItemComponent_o *v28; // x20
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  int32_t spendQpVal; // w8
  int32_t haveQpVal; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFAF9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v6);
    byte_49FFAF9 = 1;
  }
  CommandCardEquipmentControl__SetHaveQpInfo(this, method);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_39;
  v9 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v11 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v11;
  *(_QWORD *)&v33.fields.fakeValue = v10;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v33, 0LL);
  if ( !this->fields.targetCommandCardData )
    goto LABEL_39;
  v12 = Instance;
  Instance = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)this->fields.targetCommandCardData, 0LL);
  if ( !v9 )
    goto LABEL_39;
  Instance = (int64_t)ServantCommandCodeUnlockMaster__GetEntity(v9, v12, Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  spendQpLabel = this->fields.spendQpLabel;
  this->fields.spendQpVal = *(_DWORD *)(Instance + 24);
  v14 = Instance;
  Instance = (int64_t)System_Int32__ToString_62180668((int)this + 520, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
  if ( !spendQpLabel )
    goto LABEL_39;
  UILabel__set_text(spendQpLabel, (System_String_o *)Instance, 0LL);
  unlockItemInfoList = this->fields.unlockItemInfoList;
  if ( !unlockItemInfoList )
    goto LABEL_39;
  v17 = *(_QWORD *)(v14 + 40);
  if ( !v17 )
    goto LABEL_39;
  max_length = unlockItemInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v19 = *(_QWORD *)(v17 + 24);
    v20 = *(_QWORD *)(v14 + 32);
    v21 = max_length - 1;
    v22 = 0LL;
    v23 = v17 + 32;
    v24 = (int)v19;
    v25 = v20 + 32;
    v26 = v19 << 32 > 0;
    do
    {
      if ( v22 >= unlockItemInfoList->max_length )
LABEL_38:
        sub_1B6432C(Instance, v15);
      v27 = &unlockItemInfoList->obj.klass + v22;
      v28 = (LimitCntUpItemComponent_o *)v27[4];
      if ( v26 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( v22 >= *(unsigned int *)(v17 + 24) )
          goto LABEL_38;
        if ( !v20 )
          break;
        if ( v22 >= *(unsigned int *)(v20 + 24) )
          goto LABEL_38;
        if ( !v28 )
          break;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v28,
          Instance,
          *(_DWORD *)(v23 + 4 * v22),
          *(_DWORD *)(v25 + 4 * v22),
          0LL);
        if ( v22 >= *(unsigned int *)(v17 + 24) || v22 >= *(unsigned int *)(v20 + 24) )
          goto LABEL_38;
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
        goto LABEL_32;
      unlockItemInfoList = this->fields.unlockItemInfoList;
      v26 = (__int64)++v22 < v24;
    }
    while ( unlockItemInfoList );
LABEL_39:
    sub_1B64324(Instance);
  }
LABEL_32:
  CombineMenuControl__SortCombineItemInfoList((CombineMenuControl_o *)this, v15);
  spendQpVal = this->fields.spendQpVal;
  haveQpVal = this->fields.haveQpVal;
  this->fields.isCanCombine = 1;
  this->fields.isShortQp = spendQpVal > haveQpVal;
  if ( spendQpVal > haveQpVal )
  {
    Instance = (int64_t)this->fields.spendQpLabel;
    if ( !Instance )
      goto LABEL_39;
    v34.fields.r = 1.0;
    v34.fields.g = 0.0;
    v34.fields.b = 0.0;
    v34.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v34, 0LL);
    this->fields.isCanCombine = 0;
  }
  if ( this->fields.isShortNeedItem )
    this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v30);
}


void __fastcall CommandCardEquipmentControl__UpdateItemLinkListWindowButton(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v6; // w0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  bool v9; // w1

  if ( (byte_49FFB13 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FFB13 = 1;
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)CommonUI__get_IsEnableItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0
        && this->fields.baseUserServantEntity
        && (Instance = (UnityEngine_Component_o *)System_Linq_Enumerable__Any_object_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                    (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___),
            ((unsigned __int8)Instance & 1) != 0) )
      {
        if ( gameObject )
        {
          v9 = 1;
LABEL_19:
          UnityEngine_GameObject__SetActive(gameObject, v9, 0LL);
          return;
        }
      }
      else if ( gameObject )
      {
        v9 = 0;
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1B64324(Instance);
  }
}


void __fastcall CommandCardEquipmentControl___OpenLockDialog_b__94_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  CommandCardDialog__Close_44427484(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestLockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1B64324(commandCardDialog);
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
    sub_1B64324(0LL);
  CommandCardDialog__Close_44427484(commandCardDialog, 0LL, method);
}


void __fastcall CommandCardEquipmentControl___OpenUnlockDialog_b__93_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  CommandCardDialog__Close_44427484(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestUnlockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1B64324(commandCardDialog);
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

  if ( (byte_49FFB06 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49FFB06 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v6, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardIndex(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  BattleCommandComponent_o *v4; // x0

  if ( (byte_49FFB05 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFB05 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    return -1;
  v4 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !v4 )
    sub_1B64324(0LL);
  return BattleCommandComponent__getMarkIndex(v4, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0

  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_1B64324(0LL);
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
  BattleCommandComponent_o *v9; // x0
  _BOOL4 v10; // w21
  _QWORD *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_49FFAEE & 1) == 0 )
  {
    sub_1B640C8(&Method_CommandCardEquipmentControl_touchCommandCard__, *(_QWORD *)&index);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FFAEE = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    if ( this->fields.displayTransformIndex >= 1 )
    {
      v6 = Method_CommandCardEquipmentControl_touchCommandCard__;
      if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1B640E0(Method_CommandCardEquipmentControl_touchCommandCard__);
      v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
LABEL_18:
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
      return;
    }
    targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    {
      v9 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
      if ( !v9 )
        sub_1B64324(0LL);
      v10 = BattleCommandComponent__getMarkIndex(v9, 0LL) == index;
    }
    else
    {
      v10 = 0;
    }
    v11 = Method_CommandCardEquipmentControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B640E0(Method_CommandCardEquipmentControl_touchCommandCard__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
    if ( v10 )
      goto LABEL_18;
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t targetCardIdx; // w21
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w0
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  __int64 v15; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v17; // x9
  CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *v18; // x20
  Il2CppObject *v19; // x22
  System_Action_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // w3
  System_Action_o *v24; // x0
  UnityEngine_WaitForSeconds_o *v25; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  bool result; // w0
  System_Action_o *callback; // x0
  struct CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x8
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t v33; // w21
  __int64 v34; // x22
  __int64 v35; // x23
  int32_t v36; // w0
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  __int64 v39; // x2
  UnityEngine_WaitForSeconds_o *v40; // x20
  ServantStatusBattleListViewItem_o *v41; // x19
  int32_t v42; // w2
  int32_t v43; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  v2 = this;
  if ( (byte_49FFB1A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)sub_1B640C8(
                                                                        &UnityEngine_WaitForSeconds_TypeInfo,
                                                                        v5);
    byte_49FFB1A = 1;
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
          *(_QWORD *)&v44.fields.currentCryptoKey = v11;
          *(_QWORD *)&v44.fields.fakeValue = v10;
          v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
          this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                              _4__this,
                                                                              targetCardIdx,
                                                                              v12,
                                                                              v13);
          commandCardList = _4__this->fields.commandCardList;
          if ( commandCardList )
          {
            v17 = v2->fields.targetCardIdx;
            if ( (unsigned int)v17 >= commandCardList->max_length )
              sub_1B6432C(this, v14);
            v18 = this;
            v19 = (Il2CppObject *)commandCardList->m_Items[v17];
            v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
            System_Action___ctor(v20, v19, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
            if ( v18 )
            {
              if ( v20 )
              {
                v18[3].fields.callback = v20;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18[3].fields.callback, (int32_t)v20, v22, v23);
              }
              v24 = v18[3].fields.callback;
              if ( v24 )
                ActionExtensions__Call(v24, 0LL);
              v25 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v21, v22);
              UnityEngine_WaitForSeconds___ctor(v25, 0.3, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v25;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B6406C(p__2__current, (int32_t)v25, v27, v28);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
              return result;
            }
          }
        }
      }
LABEL_27:
      sub_1B64324(this);
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
  v33 = v2->fields.targetCardIdx;
  v35 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v35;
  *(_QWORD *)&v45.fields.fakeValue = v34;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v33, v36, v37);
  v40 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v38, v39);
  UnityEngine_WaitForSeconds___ctor(v40, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v40;
  v41 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(v41, (int32_t)v40, v42, v43);
  *(_DWORD *)&v41[-1].fields.isMine = 2;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_CommandCardEquipmentControl__PlayReplaceEffect_d__125_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t removeCardIdx; // w21
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w0
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  __int64 v15; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v17; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v18; // x21
  Il2CppObject *v19; // x23
  System_Action_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // w3
  System_Action_o *v24; // x0
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t attachCardIdx; // w21
  __int64 v27; // x22
  __int64 v28; // x23
  int32_t v29; // w0
  const MethodInfo *v30; // x3
  __int64 v31; // x2
  struct CombineCommandCardComponent_array *v32; // x8
  __int64 v33; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v34; // x20
  Il2CppObject *v35; // x22
  System_Action_o *v36; // x21
  int32_t v37; // w3
  System_Action_o *v38; // x0
  UnityEngine_WaitForSeconds_o *v39; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v41; // w2
  int32_t v42; // w3
  bool result; // w0
  System_Action_o *callback; // x0
  struct CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x8
  struct UserCommandCodeEntity_o *v46; // x8
  int32_t v47; // w21
  __int64 v48; // x22
  __int64 v49; // x23
  int32_t v50; // w0
  const MethodInfo *v51; // x3
  __int64 v52; // x1
  __int64 v53; // x2
  UnityEngine_WaitForSeconds_o *v54; // x20
  ServantStatusBattleListViewItem_o *v55; // x19
  int32_t v56; // w2
  int32_t v57; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  v2 = this;
  if ( (byte_49FFB1B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)sub_1B640C8(
                                                                                  &UnityEngine_WaitForSeconds_TypeInfo,
                                                                                  v5);
    byte_49FFB1B = 1;
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
      v11 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = v11;
      *(_QWORD *)&v58.fields.fakeValue = v10;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v58, 0LL);
      this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                    _4__this,
                                                                                    removeCardIdx,
                                                                                    v12,
                                                                                    v13);
      commandCardList = _4__this->fields.commandCardList;
      if ( !commandCardList )
        goto LABEL_40;
      v17 = v2->fields.removeCardIdx;
      if ( (unsigned int)v17 < commandCardList->max_length )
      {
        v18 = this;
        v19 = (Il2CppObject *)commandCardList->m_Items[v17];
        v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
        System_Action___ctor(v20, v19, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
        if ( !v18 )
          goto LABEL_40;
        if ( v20 )
        {
          v18[3].fields.callback = v20;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18[3].fields.callback, (int32_t)v20, v22, v23);
        }
        v24 = v18[3].fields.callback;
        if ( v24 )
          ActionExtensions__Call(v24, 0LL);
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( !nowEquipedUserCommandCodeEntity )
          goto LABEL_27;
        attachCardIdx = v2->fields.attachCardIdx;
        v28 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
        v27 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v59.fields.currentCryptoKey = v28;
        *(_QWORD *)&v59.fields.fakeValue = v27;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v59, 0LL);
        this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                      _4__this,
                                                                                      attachCardIdx,
                                                                                      v29,
                                                                                      v30);
        v32 = _4__this->fields.commandCardList;
        if ( !v32 )
LABEL_40:
          sub_1B64324(this);
        v33 = v2->fields.attachCardIdx;
        if ( (unsigned int)v33 < v32->max_length )
        {
          v34 = this;
          v35 = (Il2CppObject *)v32->m_Items[v33];
          v36 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v31);
          System_Action___ctor(v36, v35, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
          if ( v34 )
          {
            if ( v36 )
            {
              v34[3].fields.callback = v36;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34[3].fields.callback, (int32_t)v36, v22, v37);
            }
            v38 = v34[3].fields.callback;
            if ( v38 )
              ActionExtensions__Call(v38, 0LL);
LABEL_27:
            v39 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v21, v22);
            UnityEngine_WaitForSeconds___ctor(v39, 0.3, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v39;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)v39, v41, v42);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
            return result;
          }
          goto LABEL_40;
        }
      }
      sub_1B6432C(this, v14);
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
  v46 = _4__this->fields.baseUserCommandCodeEntity;
  if ( !v46 )
    goto LABEL_40;
  v47 = v2->fields.attachCardIdx;
  v49 = *(_QWORD *)&v46->fields.commandCodeId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&v46->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v60.fields.currentCryptoKey = v49;
  *(_QWORD *)&v60.fields.fakeValue = v48;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v60, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v47, v50, v51);
  v54 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v52, v53);
  UnityEngine_WaitForSeconds___ctor(v54, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v54;
  v55 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(v55, (int32_t)v54, v56, v57);
  *(_DWORD *)&v55[-1].fields.isMine = 2;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFB16 & 1) == 0 )
  {
    sub_1B640C8(&CommandCardEquipmentControl___c_TypeInfo, v1);
    byte_49FFB16 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CommandCardEquipmentControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CommandCardEquipmentControl___c_TypeInfo->static_fields->__9 = (struct CommandCardEquipmentControl___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CommandCardEquipmentControl___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FFB17 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FFB17 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
    sub_1B64324(this);
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
  if ( (byte_49FFB18 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)sub_1B640C8(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    isDecide);
    byte_49FFB18 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_9:
      sub_1B64324(this);
    }
    CombineRootComponent__RequestSelfAttachReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( (byte_49FFB19 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)sub_1B640C8(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    isDecide);
    byte_49FFB19 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_11:
      sub_1B64324(this);
    }
    if ( v4->fields.isCommandCardEmpty )
      CombineRootComponent__RequestEquipCommandCode((CombineRootComponent_o *)this, 0LL);
    else
      CombineRootComponent__RequestReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}