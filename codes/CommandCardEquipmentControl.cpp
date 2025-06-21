void __fastcall CommandCardEquipmentControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct CommandCardEquipmentControl_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct CommandCardEquipmentControl_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct CommandCardEquipmentControl_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  struct CommandCardEquipmentControl_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  struct CommandCardEquipmentControl_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w1
  struct CommandCardEquipmentControl_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  struct CommandCardEquipmentControl_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3

  if ( (byte_4B20266 & 1) == 0 )
  {
    sub_1BCAFF8(&CommandCardEquipmentControl_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_20459/*"img_txt_equipcc_3"*/, v4);
    sub_1BCAFF8(&StringLiteral_20458/*"img_txt_equipcc_1"*/, v5);
    sub_1BCAFF8(&StringLiteral_19947/*"icon_arrow_pink"*/, v6);
    sub_1BCAFF8(&StringLiteral_17446/*"btn_txt_replace"*/, v7);
    sub_1BCAFF8(&StringLiteral_20543/*"img_txt_unlockcc"*/, v8);
    sub_1BCAFF8(&StringLiteral_17418/*"btn_txt_equipcc"*/, v9);
    sub_1BCAFF8(&StringLiteral_20460/*"img_txt_equipcc_4"*/, v10);
    sub_1BCAFF8(&StringLiteral_17473/*"btn_txt_unlockcc"*/, v11);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v12);
    byte_4B20266 = 1;
  }
  CommandCardEquipmentControl_TypeInfo->static_fields->defaultDetailColor = (struct UnityEngine_Color_o)xmmword_BE3570;
  v13 = StringLiteral_19947/*"icon_arrow_pink"*/;
  static_fields = CommandCardEquipmentControl_TypeInfo->static_fields;
  static_fields->DEFAULT_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19947/*"icon_arrow_pink"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->DEFAULT_MESSAGE_SPRITE_NAME, v13, v2, v3);
  v15 = StringLiteral_20543/*"img_txt_unlockcc"*/;
  v16 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v16->UNLOCK_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20543/*"img_txt_unlockcc"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v16->UNLOCK_MESSAGE_SPRITE_NAME, v15, v17, v18);
  v19 = StringLiteral_20458/*"img_txt_equipcc_1"*/;
  v20 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v20->EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20458/*"img_txt_equipcc_1"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v20->EQUIPED_MESSAGE_SPRITE_NAME, v19, v21, v22);
  v23 = StringLiteral_20459/*"img_txt_equipcc_3"*/;
  v24 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v24->SELECTED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20459/*"img_txt_equipcc_3"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v24->SELECTED_MESSAGE_SPRITE_NAME, v23, v25, v26);
  v27 = StringLiteral_20460/*"img_txt_equipcc_4"*/;
  v28 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v28->NOT_EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20460/*"img_txt_equipcc_4"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v28->NOT_EQUIPED_MESSAGE_SPRITE_NAME, v27, v29, v30);
  v31 = (int)StringLiteral_1/*""*/;
  v32 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v32->DEFAULT_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v32->DEFAULT_EXE_BTN_SPRITE_NAME, v31, v33, v34);
  v35 = StringLiteral_17473/*"btn_txt_unlockcc"*/;
  v36 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v36->UNLOCK_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17473/*"btn_txt_unlockcc"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v36->UNLOCK_EXE_BTN_SPRITE_NAME, v35, v37, v38);
  v39 = StringLiteral_17418/*"btn_txt_equipcc"*/;
  v40 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v40->EQUIP_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17418/*"btn_txt_equipcc"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v40->EQUIP_EXE_BTN_SPRITE_NAME, v39, v41, v42);
  v43 = StringLiteral_17446/*"btn_txt_replace"*/;
  v44 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v44->REPLACE_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17446/*"btn_txt_replace"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v44->REPLACE_EXE_BTN_SPRITE_NAME, v43, v45, v46);
}


void __fastcall CommandCardEquipmentControl___ctor(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B20265 & 1) == 0 )
  {
    sub_1BCAFF8(&CombineMenuControl_TypeInfo, method);
    byte_4B20265 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  UnityEngine_Component_o *lockButton; // x0
  const MethodInfo *v15; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x21
  __int64 v18; // x2
  int64_t v19; // x21
  Il2CppObject *Entity; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
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

  if ( (byte_4B20240 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&nowKind);
    sub_1BCAFF8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BCAFF8(&StringLiteral_3545/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, v9);
    byte_4B20240 = 1;
  }
  CommandCardEquipmentControl__InitDisplayInfo(this, *(const MethodInfo **)&nowKind);
  p_nowEquipedUserCommandCodeEntity = &this->fields.nowEquipedUserCommandCodeEntity;
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.nowEquipedUserCommandCodeEntity, 0, v11, v12);
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
    lockButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3545/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, 0LL);
    if ( commandCardNotEquippedDetail )
    {
      UILabel__set_text(commandCardNotEquippedDetail, (System_String_o *)lockButton, 0LL);
      goto LABEL_45;
    }
LABEL_46:
    sub_1BCB254(lockButton, v13);
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
    sub_1BCB25C(lockButton, v13, v18);
  v19 = userCommandCodeIds->m_Items[(int)lockButton];
  lockButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lockButton )
    goto LABEL_46;
  lockButton = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)lockButton,
                                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !lockButton )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)lockButton,
             v19,
             (const MethodInfo_32CA35C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  *p_nowEquipedUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.nowEquipedUserCommandCodeEntity, (int32_t)Entity, v21, v22);
  v23 = *p_nowEquipedUserCommandCodeEntity;
  if ( !*p_nowEquipedUserCommandCodeEntity )
    goto LABEL_46;
  v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v34 = v35;
  v25 = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v34, 0LL);
  v27 = CommandCardEquipmentControl__EnableReplace(v25, (int64_t)v25, v26);
  CommandCardEquipmentControl__SetReplaceButtonState(this, v27, v28);
  CommandCardEquipmentControl__SetSelectedCommandCodeInfo(this, (UserCommandCodeEntity_o *)Entity, 0, -1, v29);
LABEL_45:
  CommandCardEquipmentControl__UpdateItemLinkListWindowButton(this, v13);
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
  if ( (byte_4B20245 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__, dic);
    this = (CommandCardEquipmentControl_o *)sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B20245 = 1;
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
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v9, 0LL);
  if ( !dic )
LABEL_8:
    sub_1BCB254(this, dic);
  return System_Collections_Generic_Dictionary_long__long___ContainsKey(
           dic,
           (int64_t)this,
           (const MethodInfo_3361E20 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
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

  if ( (byte_4B20244 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B20244 = 1;
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
      Master_object = (UserServantCommandCodeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
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
    sub_1BCB254(Master_object, v7);
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
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-40h]

  if ( (byte_4B2023C & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4B2023C = 1;
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
    sub_1BCB254(baseSelectInfoObj, selectBase);
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
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v18, 0LL);
    v8 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v17.fields.fakeValue = v8;
    if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v17, 0LL) )
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBase, v12, v13);
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
  CommandCardDialog__Close_47393492(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestRemoveCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1BCB254(commandCardDialog, isDecide);
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
  __int64 v13; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Transform_o *v17; // x21
  const MethodInfo *v18; // x2

  if ( (byte_4B2025F & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B2025F = 1;
  }
  commandCodeAppearEffect = (Il2CppObject *)this->fields.commandCodeAppearEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeAppearEffect,
                                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
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
    sub_1BCB25C(Component_object, v11, v13);
  v15 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v15 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v16 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16191 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B16191 = 1;
  }
  if ( !v16 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v17 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16196 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B16196 = 1;
  }
  if ( !v17 )
LABEL_18:
    sub_1BCB254(Component_object, v11);
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v12, commandCodeId, v18);
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

  if ( (byte_4B20261 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B20261 = 1;
  }
  commandCodeFlashEffect = (Il2CppObject *)this->fields.commandCodeFlashEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeFlashEffect,
                                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
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
  if ( !byte_4B16191 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4B16191 = 1;
  }
  if ( !v11 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v8, 0LL);
  v12 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16196 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4B16196 = 1;
  }
  if ( !v12 )
LABEL_17:
    sub_1BCB254(Component_object, v7);
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
  __int64 v13; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Transform_o *v17; // x21
  const MethodInfo *v18; // x2

  if ( (byte_4B2025E & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B2025E = 1;
  }
  commandCardDetachEffect = (Il2CppObject *)this->fields.commandCardDetachEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCardDetachEffect,
                                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
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
    sub_1BCB25C(Component_object, v11, v13);
  v15 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v15 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v16 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16191 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B16191 = 1;
  }
  if ( !v16 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v17 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16196 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B16196 = 1;
  }
  if ( !v17 )
LABEL_18:
    sub_1BCB254(Component_object, v11);
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v12, commandCodeId, v18);
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

  if ( (byte_4B20260 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B20260 = 1;
  }
  commandCodeReplaceEffect = (Il2CppObject *)this->fields.commandCodeReplaceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeReplaceEffect,
                                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
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
  if ( !byte_4B16191 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4B16191 = 1;
  }
  if ( !v11 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v8, 0LL);
  v12 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16196 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4B16196 = 1;
  }
  if ( !v12 )
LABEL_17:
    sub_1BCB254(Component_object, v7);
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
  __int64 v14; // x2
  int max_length; // w23
  System_Collections_Generic_List_long__o *v16; // x21
  BalanceConfig_c *v17; // x8
  int v18; // w24
  il2cpp_array_size_t v19; // w25
  UserCommandCodeEntity_o *v20; // x28
  __int128 v21; // q0
  __int128 v22; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-80h]

  if ( (byte_4B20241 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, nowEquipedUserCommandCodeId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__Contains__, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_4B20241 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
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
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
  if ( !Master_object )
LABEL_32:
    sub_1BCB254(Master_object, v10);
  EquipedCommandCodeList = UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                             (UserServantCommandCodeMaster_o *)Master_object,
                             0LL);
  max_length = v12->max_length;
  v16 = EquipedCommandCodeList;
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  Master_object = 1LL;
  if ( v17->static_fields->CommandCodeFrameMax <= max_length && max_length >= 1 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= v12->max_length )
        sub_1BCB25C(Master_object, v10, v14);
      v20 = v12->m_Items[v19];
      if ( !v20 )
        goto LABEL_32;
      v21 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v21;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v25 = v26;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v25, 0LL);
      if ( Master_object != nowEquipedUserCommandCodeId )
      {
        v22 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v26.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v26;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v24, 0LL);
        if ( !v16 )
          goto LABEL_32;
        Master_object = System_Collections_Generic_List_long___Contains(
                          v16,
                          Master_object,
                          (const MethodInfo_36A1F7C *)Method_System_Collections_Generic_List_long__Contains__);
        if ( (Master_object & 1) != 0 )
        {
          Master_object = (int64_t)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = (int64_t)BalanceConfig_TypeInfo;
          }
          if ( ++v18 >= *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 160LL) )
            break;
        }
      }
      if ( max_length == ++v19 )
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

  if ( (byte_4B20255 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B20255 = 1;
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v14, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v12);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    p_baseUserServantEntity,
    v10,
    (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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

  if ( (byte_4B2023B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId);
    sub_1BCAFF8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B2023B = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_32CA35C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v8);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = klass;
  *(_QWORD *)&v12.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v12, 0LL);
}


bool __fastcall CommandCardEquipmentControl__GetExeBtnState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_4B20243 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B20243 = 1;
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
    sub_1BCB254(this, index);
  if ( userCommandCodeIds->max_length <= index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
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
  __int64 v2; // x2
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
        sub_1BCB25C(this, method, v2);
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
    sub_1BCB254(this, method);
  }
LABEL_9:
  v6->fields.targetCommandCardData = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.targetCommandCardData, 0, v2, v3);
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
    sub_1BCB254(commandCardInfoObj, method);
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
  __int64 v6; // x2
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  int max_length; // w20
  il2cpp_array_size_t v9; // w21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
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
        sub_1BCB25C(baseSelectInfoObj, v5, v6);
      baseSelectInfoObj = unlockItemInfoList->m_Items[v9];
      if ( !baseSelectInfoObj )
        break;
      LimitCntUpItemComponent__enableDispItemInfo(baseSelectInfoObj, 0LL);
      if ( max_length == ++v9 )
        goto LABEL_9;
      unlockItemInfoList = this->fields.unlockItemInfoList;
    }
    while ( unlockItemInfoList );
LABEL_8:
    sub_1BCB254(baseSelectInfoObj, v5);
  }
LABEL_9:
  CommandCardEquipmentControl__InitTransformInfo(this, v5);
  CommandCardEquipmentControl__InitDisplayInfo(this, v10);
  CommandCardEquipmentControl__InitDispCommandCardInfo(this, v11);
  CommandCardEquipmentControl__InitDispBaseServantInfo(this, v12);
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
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *cardSwitchButton; // x0
  UnityEngine_Object_o *charaGraph; // x20
  CGThumbnailListItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B20238 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B20238 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserServantCommandCodeEntity, 0, v5, v6);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserCommandCodeEntity, 0, v7, v8);
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.nowEquipedUserCommandCodeEntity, 0, v9, v10);
  cardSwitchButton = this->fields.cardSwitchButton;
  if ( !cardSwitchButton )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (CGThumbnailListItem_o *)&this->fields.charaGraph;
    cardSwitchButton = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)cardSwitchButton,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1BCAF9C(p_charaGraph, 0, v16, v17);
      return;
    }
LABEL_12:
    sub_1BCB254(cardSwitchButton, v11);
  }
}


void __fastcall CommandCardEquipmentControl__InitDispCommandCardInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  UnityEngine_Component_o *lockButton; // x0
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  int max_length; // w21
  il2cpp_array_size_t v11; // w22
  CombineCommandCardComponent_o *v12; // x20
  const MethodInfo *v13; // x2

  this->fields.targetCommandCardData = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.targetCommandCardData, 0, v2, v3);
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
    v11 = 0;
    do
    {
      if ( v11 >= commandCardList->max_length )
        sub_1BCB25C(lockButton, v5, v7);
      v12 = commandCardList->m_Items[v11];
      if ( !v12 )
        break;
      CombineCommandCardComponent__SetSpriteActive(
        (CombineCommandCardComponent_o *)lockButton,
        v12->fields.selectedSprite,
        0,
        v8);
      CombineCommandCardComponent__SetCommandCardEnable(v12, 0, v13);
      if ( max_length == ++v11 )
        return;
      commandCardList = this->fields.commandCardList;
    }
    while ( commandCardList );
LABEL_12:
    sub_1BCB254(lockButton, v5);
  }
}


void __fastcall CommandCardEquipmentControl__InitDisplayInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *qpInfoObj; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  qpInfoObj = this->fields.qpInfoObj;
  if ( !qpInfoObj
    || (UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL),
        (qpInfoObj = (UnityEngine_GameObject_o *)this->fields.spendQpLabel) == 0LL) )
  {
    sub_1BCB254(qpInfoObj, method);
  }
  v5.fields.r = 1.0;
  v5.fields.g = 1.0;
  v5.fields.b = 1.0;
  v5.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)qpInfoObj, v5, 0LL);
  this->fields.isShortNeedItem = 0;
  *(_WORD *)&this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v4);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
}


void __fastcall CommandCardEquipmentControl__InitTransformInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *cardSwitchButton; // x0
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t TransformCount; // w1

  cardSwitchButton = this->fields.cardSwitchButton;
  if ( !cardSwitchButton
    || (UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0LL),
        (cardSwitchButton = (UnityEngine_GameObject_o *)this->fields.servantName) == 0LL)
    || (cardSwitchButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cardSwitchButton, 0LL)) == 0LL )
  {
    sub_1BCB254(cardSwitchButton, method);
  }
  UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  TransformCount = 1;
  this->fields.displayTransformIndex = 0;
  if ( baseUserServantEntity )
    TransformCount = UserServantEntity__GetTransformCount(baseUserServantEntity, 1, 0LL);
  CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0LL);
}


bool __fastcall CommandCardEquipmentControl__IsSelectedCommandCard(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_4B20263 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B20263 = 1;
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
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int64_t v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  v4 = this;
  if ( (byte_4B2023A & 1) == 0 )
  {
    this = (CommandCardEquipmentControl_o *)sub_1BCAFF8(&BattleCommandData_TypeInfo, *(_QWORD *)&cardIndex);
    byte_4B2023A = 1;
  }
  commandCardList = v4->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_11;
  if ( commandCardList->max_length <= cardIndex )
    goto LABEL_12;
  v6 = commandCardList->m_Items[cardIndex];
  if ( !v6
    || (data = v6->fields.data,
        v8 = (BattleCommandData_o *)sub_1BCB244(BattleCommandData_TypeInfo),
        BattleCommandData___ctor_45633244(v8, data, 0LL),
        (baseUserServantCommandCodeEntity = v4->fields.baseUserServantCommandCodeEntity) == 0LL)
    || (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) == 0LL )
  {
LABEL_11:
    sub_1BCB254(this, *(_QWORD *)&cardIndex);
  }
  if ( userCommandCodeIds->max_length <= cardIndex )
LABEL_12:
    sub_1BCB25C(this, *(_QWORD *)&cardIndex, method);
  if ( !v8 )
    goto LABEL_11;
  v11 = userCommandCodeIds->m_Items[cardIndex];
  v8->fields.userCommandCodeId = v11;
  v8->fields.commandCodeId = CommandCardEquipmentControl__GetCommandCodeId(this, v11, method);
  CombineCommandCardComponent__ModifyCommandCard(v6, v8, v11, v12);
  CombineCommandCardComponent__SetLayout(v6, v4->fields.positionOffsetY, v4->fields.scaleOffset, v13);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct UserServantCommandCodeEntity_o **p_baseUserServantCommandCodeEntity; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B20239 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userServantEntity);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B20239 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
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
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v19, 0LL);
  if ( !MasterData_object )
LABEL_18:
    sub_1BCB254(Instance, v9);
  if ( UserServantCommandCodeMaster__TryGetEntity(
         (UserServantCommandCodeMaster_o *)MasterData_object,
         &entity,
         v13,
         (int)Instance,
         0LL) )
  {
    v16 = (int)entity;
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    this->fields.baseUserServantCommandCodeEntity = entity;
  }
  else
  {
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    v16 = 0;
    this->fields.baseUserServantCommandCodeEntity = 0LL;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)p_baseUserServantCommandCodeEntity, v16, v14, v15);
}


void __fastcall CommandCardEquipmentControl__OnClickCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B20250 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommandCardEquipmentControl_OnClickCommandCode__, method);
    byte_4B20250 = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnClickCommandCode__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickCommandCode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_CommandCardEquipmentControl_OnClickCommandCode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCB254(0LL, v5);
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

  if ( (byte_4B2024F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommandCardEquipmentControl_OnClickEmptyEquip__, method);
    byte_4B2024F = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnClickEmptyEquip__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickEmptyEquip__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_CommandCardEquipmentControl_OnClickEmptyEquip__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCB254(0LL, v5);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnClickSwitchButton(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UserServantEntity_o *baseUserServantEntity; // x0
  UISprite_o *executeButtonSprite; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  bool v13; // w1
  UnityEngine_Object_o *targetCommandCardData; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v16; // x2
  UnityEngine_GameObject_o *v17; // x0
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B20262 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommandCardEquipmentControl_OnClickSwitchButton__, method);
    sub_1BCAFF8(&CommandCardEquipmentControl_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B20262 = 1;
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
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserCommandCodeEntity, 0, v6, v7);
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
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v10);
      CommandCardEquipmentControl__InitDisplayInfo(this, v11);
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
                v13 = 0;
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
    CommandCardEquipmentControl__SetCommandCardDisplay(this, MarkIndex, v16);
  }
  baseUserServantEntity = (UserServantEntity_o *)this->fields.messageTxtLabelSprite;
  if ( !baseUserServantEntity
    || (v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL),
        (baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(v17, 0LL)) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)baseUserServantEntity,
                                                         0LL)) == 0LL )
  {
LABEL_30:
    sub_1BCB254(baseUserServantEntity, v5);
  }
  v13 = 1;
LABEL_27:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v13, 0LL);
  v18 = Method_CommandCardEquipmentControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCB010(Method_CommandCardEquipmentControl_OnClickSwitchButton__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnLockCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B2024B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__, method);
    byte_4B2024B = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  CGThumbnailListItem_o *p_baseUserCommandCodeEntity; // x19
  CGThumbnailListItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  Il2CppObject *Entity; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  CommandCardEquipmentControl___c_c *v22; // x8
  UserCommandCodeEntity_o *v23; // x19
  CommonUI_o *v24; // x20
  ServantStatusDialog_EndDelegate_o *_9__105_0; // x21
  Il2CppObject *v26; // x22
  struct CommandCardEquipmentControl___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-50h]

  if ( (byte_4B20251 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommandCardEquipmentControl_OnLongPushCommandCode__, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BCAFF8(&Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__105_0__, v9);
    sub_1BCAFF8(&CommandCardEquipmentControl___c_TypeInfo, v10);
    byte_4B20251 = 1;
  }
  if ( this->fields.baseUserCommandCodeEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    p_baseUserCommandCodeEntity = (CGThumbnailListItem_o *)&this->fields.baseUserCommandCodeEntity;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    klass = p_baseUserCommandCodeEntity->klass;
    if ( !p_baseUserCommandCodeEntity->klass )
      goto LABEL_20;
    byval_arg = klass->_1.byval_arg;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v31.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v30 = v31;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v30, 0LL);
    if ( !v16 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__long___GetEntity(
               v16,
               (int64_t)Instance,
               (const MethodInfo_32CA35C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_baseUserCommandCodeEntity->klass = (CGThumbnailListItem_c *)Entity;
    sub_1BCAF9C(p_baseUserCommandCodeEntity, (int32_t)Entity, v18, v19);
    v20 = Method_CommandCardEquipmentControl_OnLongPushCommandCode__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLongPushCommandCode__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1BCB010(Method_CommandCardEquipmentControl_OnLongPushCommandCode__);
    v21 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = CommandCardEquipmentControl___c_TypeInfo;
    v23 = (UserCommandCodeEntity_o *)p_baseUserCommandCodeEntity->klass;
    v24 = (CommonUI_o *)Instance;
    if ( !CommandCardEquipmentControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl___c_TypeInfo);
      v22 = CommandCardEquipmentControl___c_TypeInfo;
    }
    _9__105_0 = v22->static_fields->__9__105_0;
    if ( !_9__105_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = CommandCardEquipmentControl___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v22->static_fields->__9;
      _9__105_0 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        _9__105_0,
        v26,
        Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__105_0__,
        0LL);
      static_fields = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      static_fields->__9__105_0 = _9__105_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__105_0, (int32_t)_9__105_0, v28, v29);
    }
    if ( !v24 )
LABEL_20:
      sub_1BCB254(Instance, v12);
    CommonUI__OpenServantStatusDialog_30776372(v24, 0, v23, _9__105_0, 0LL, 0LL);
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

  if ( (byte_4B2024C & 1) == 0 )
  {
    sub_1BCAFF8(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_1BCAFF8(&Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__, v3);
    sub_1BCAFF8(&Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__, v4);
    byte_4B2024C = 1;
  }
  v5 = Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  commandCardDialog = this->fields.commandCardDialog;
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  v9 = (CommandCardDialog_ClickDelegate_o *)sub_1BCB244(CommandCardDialog_ClickDelegate_TypeInfo);
  CommandCardDialog_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__,
    v10);
  if ( !commandCardDialog )
    sub_1BCB254(v11, v12);
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

  if ( (byte_4B2024D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__, method);
    byte_4B2024D = 1;
  }
  if ( this->fields.nowEquipedUserCommandCodeEntity )
  {
    v3 = Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      sub_1BCB254(0LL, v5);
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
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  const MethodInfo *v11; // x2

  if ( (byte_4B2024E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommandCardEquipmentControl_OnReplaceReset__, method);
    byte_4B2024E = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnReplaceReset__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_CommandCardEquipmentControl_OnReplaceReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserCommandCodeEntity, 0, v5, v6);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_1BCB254(v7, v8);
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
  int64_t v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_String_o *v34; // x26
  System_String_o *v35; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  System_String_o *v37; // x19
  __int64 v38; // x23
  __int64 v39; // x24
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v41; // q0
  int v42; // w23
  struct UserCommandCodeEntity_o *v43; // x8
  __int128 v44; // q0
  UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x22
  long double v46; // q0
  __int64 v47; // x0
  __int64 v48; // x0
  CommonUI_o *v49; // x21
  System_String_o *v50; // x22
  System_String_o *v51; // x23
  CommonConfirmDialog_ClickDelegate_o *v52; // x24
  Il2CppObject *v53; // x19
  struct UserServantEntity_o *v54; // x8
  UserServantCollectionMaster_o *v55; // x28
  __int64 v56; // x24
  __int64 v57; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o *v59; // x24
  struct UserServantEntity_o *v60; // x8
  __int64 v61; // x27
  __int64 v62; // x29
  int64_t v63; // x25
  UserServantCollectionEntity_o *v64; // x25
  int32_t DispLimitCountFromUserServantCollection; // w29
  struct UserServantEntity_o *v66; // x8
  __int64 v67; // x25
  __int64 v68; // x27
  struct UserCommandCodeEntity_o *v69; // x9
  __int128 v70; // q0
  int32_t v71; // w25
  int32_t v72; // w0
  Il2CppObject *v73; // x0
  ServantEntity_o *v74; // x27
  struct UserCommandCodeEntity_o *v75; // x8
  __int128 v76; // q0
  int64_t v77; // x19
  int64_t v78; // x0
  int32_t v79; // w0
  UserServantCollectionEntity_o *v80; // x19
  int32_t v81; // w25
  int32_t v82; // w8
  struct UserCommandCodeEntity_o *v83; // x8
  __int128 v84; // q0
  int64_t v85; // x0
  struct UserServantEntity_o *v86; // x8
  __int64 v87; // x19
  __int64 v88; // x26
  __int64 v89; // x28
  __int64 v90; // x2
  const MethodInfo *v91; // x3
  __int64 v92; // x29
  struct UserCommandCodeEntity_o *v93; // x8
  __int128 v94; // q0
  int64_t v95; // x0
  int32_t v96; // w0
  const MethodInfo *v97; // x3
  __int64 v98; // x21
  const MethodInfo *v99; // x3
  __int64 v100; // x21
  const MethodInfo *v101; // x3
  __int64 v102; // x21
  const MethodInfo *v103; // x3
  __int64 v104; // x21
  const MethodInfo *v105; // x3
  __int64 v106; // x21
  System_String_o *v107; // x19
  long double v108; // q0
  __int64 v109; // x8
  __int64 v110; // x0
  CommonUI_o *v111; // x21
  System_String_o *v112; // x22
  System_String_o *v113; // x23
  CommonConfirmDialog_ClickDelegate_o *v114; // x24
  __int64 v115; // x0
  System_String_o *format; // [xsp+48h] [xbp-168h]
  int32_t rarityId; // [xsp+54h] [xbp-15Ch]
  Il2CppObject *v118; // [xsp+58h] [xbp-158h]
  int32_t v119; // [xsp+58h] [xbp-158h]
  System_String_o *v120; // [xsp+60h] [xbp-150h]
  ServantLimitImageMaster_o *Master_object; // [xsp+68h] [xbp-148h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+130h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  if ( (byte_4B20246 & 1) == 0 )
  {
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, dic);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__, v13);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v14);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v15);
    sub_1BCAFF8(&object___TypeInfo, v16);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1BCAFF8(&Rarity_TypeInfo, v19);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v20);
    sub_1BCAFF8(
      &Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__0__,
      v21);
    sub_1BCAFF8(
      &Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__1__,
      v22);
    sub_1BCAFF8(&CommandCardEquipmentControl___c__DisplayClass92_0_TypeInfo, v23);
    sub_1BCAFF8(&StringLiteral_3625/*"COMMAND_CODE_REATTACH_TITLE"*/, v24);
    sub_1BCAFF8(&StringLiteral_3623/*"COMMAND_CODE_REATTACH_MSG"*/, v25);
    sub_1BCAFF8(&StringLiteral_3624/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, v26);
    sub_1BCAFF8(&StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, v27);
    sub_1BCAFF8(&StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, v28);
    byte_4B20246 = 1;
  }
  v29 = sub_1BCB244(CommandCardEquipmentControl___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_112;
  *(_QWORD *)(v29 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v29 + 16), (int32_t)this, v32, v33);
  *(_BYTE *)(v29 + 24) = isCommandCardEmpty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3625/*"COMMAND_CODE_REATTACH_TITLE"*/, 0LL);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3624/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v37 = v35;
    v39 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v38 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v129.fields.currentCryptoKey = v39;
    *(_QWORD *)&v129.fields.fakeValue = v38;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v129, 0LL);
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
      goto LABEL_112;
    v41 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    v42 = Item;
    *(_OWORD *)&v128.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v128.fields.fakeValue = v41;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v127 = v128;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v127, 0LL);
    if ( !dic )
      goto LABEL_112;
    Item = System_Collections_Generic_Dictionary_long__long___get_Item(
             dic,
             Item,
             (const MethodInfo_3361B8C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    if ( Item == v42 )
    {
      v43 = this->fields.baseUserCommandCodeEntity;
      if ( v43 )
      {
        v44 = *(_OWORD *)&v43->fields.id.fields.fakeValue;
        baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
        *(_OWORD *)&v128.fields.currentCryptoKey = *(_OWORD *)&v43->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v128.fields.fakeValue = v44;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v126 = v128;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v126, 0LL);
        if ( baseUserServantCommandCodeEntity )
        {
          this->fields._selectedSelfAttachCommandCardIdx_k__BackingField = UserServantCommandCodeEntity__GetUserCommandCodeNumber(
                                                                             baseUserServantCommandCodeEntity,
                                                                             Item,
                                                                             0LL);
          v47 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
          if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
            v47 = sub_1C1B45C(v46);
          v48 = *(_QWORD *)(*(_QWORD *)(v47 + 192) + 16LL);
          if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
            v48 = sub_1C1B45C(v46);
          v49 = **(CommonUI_o ***)(v48 + 184);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, 0LL);
          v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, 0LL);
          v52 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v52,
            (Il2CppObject *)v29,
            Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__0__,
            0LL);
          if ( v49 )
          {
            CommonUI__OpenConfirmDecideDlg(v49, v34, v37, v50, v51, v52, 26, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0, 0LL);
            return;
          }
        }
      }
LABEL_112:
      sub_1BCB254(Item, v31);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v118 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v53 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v54 = this->fields.baseUserServantEntity;
  if ( !v54 )
    goto LABEL_112;
  v55 = (UserServantCollectionMaster_o *)Item;
  v57 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
  v56 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v130.fields.currentCryptoKey = v57;
  *(_QWORD *)&v130.fields.fakeValue = v56;
  v120 = v34;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v130, 0LL);
  if ( !v53 )
    goto LABEL_112;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v53,
             Item,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    v59 = (ServantEntity_o *)Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
      byte_4B165D1 = 1;
    }
    Item = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Item = (__int64)NetworkManager_TypeInfo;
    }
    v60 = this->fields.baseUserServantEntity;
    if ( !v60 )
      goto LABEL_112;
    v62 = *(_QWORD *)&v60->fields.svtId.fields.currentCryptoKey;
    v61 = *(_QWORD *)&v60->fields.svtId.fields.fakeValue;
    v63 = *(_QWORD *)(*(_QWORD *)(Item + 184) + 64LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v131.fields.currentCryptoKey = v62;
    *(_QWORD *)&v131.fields.fakeValue = v61;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v131, 0LL);
    if ( !v55 )
      goto LABEL_112;
    Item = (__int64)UserServantCollectionMaster__GetEntity(v55, v63, Item, 0LL);
    if ( Item )
    {
      v64 = (UserServantCollectionEntity_o *)Item;
      DispLimitCountFromUserServantCollection = ServantEntity__GetDispLimitCountFromUserServantCollection(
                                                  v59,
                                                  *(_DWORD *)(Item + 56),
                                                  0LL);
      Item = (__int64)UserServantCollectionEntity__GetOverwriteStatus(v64, DispLimitCountFromUserServantCollection, 0LL);
      if ( !Item )
        goto LABEL_112;
    }
    else
    {
      v66 = this->fields.baseUserServantEntity;
      if ( !v66 )
        goto LABEL_112;
      v68 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
      v67 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v132.fields.currentCryptoKey = v68;
      *(_QWORD *)&v132.fields.fakeValue = v67;
      v31 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v132, 0LL);
      Item = (__int64)v118;
      if ( !v118 )
        goto LABEL_112;
      Item = (__int64)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v118, v31, 0, 0LL);
      if ( !Item )
        goto LABEL_112;
      DispLimitCountFromUserServantCollection = 0;
    }
    v69 = this->fields.baseUserCommandCodeEntity;
    if ( !v69 )
      goto LABEL_112;
    v70 = *(_OWORD *)&v69->fields.id.fields.fakeValue;
    v71 = *(_DWORD *)(Item + 24);
    *(_OWORD *)&v128.fields.currentCryptoKey = *(_OWORD *)&v69->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v128.fields.fakeValue = v70;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v125 = v128;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v125, 0LL);
    if ( !dic )
      goto LABEL_112;
    v72 = System_Collections_Generic_Dictionary_long__long___get_Item(
            dic,
            Item,
            (const MethodInfo_3361B8C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    v73 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v53,
            v72,
            (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( v73 )
    {
      v74 = (ServantEntity_o *)v73;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Item = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Item = (__int64)NetworkManager_TypeInfo;
      }
      v75 = this->fields.baseUserCommandCodeEntity;
      if ( !v75 )
        goto LABEL_112;
      v76 = *(_OWORD *)&v75->fields.id.fields.fakeValue;
      v77 = *(_QWORD *)(*(_QWORD *)(Item + 184) + 64LL);
      *(_OWORD *)&v128.fields.currentCryptoKey = *(_OWORD *)&v75->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v128.fields.fakeValue = v76;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v124 = v128;
      v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v124, 0LL);
      v79 = System_Collections_Generic_Dictionary_long__long___get_Item(
              dic,
              v78,
              (const MethodInfo_3361B8C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
      Item = (__int64)UserServantCollectionMaster__GetEntity(v55, v77, v79, 0LL);
      rarityId = v71;
      if ( Item )
      {
        v80 = (UserServantCollectionEntity_o *)Item;
        v81 = ServantEntity__GetDispLimitCountFromUserServantCollection(v74, *(_DWORD *)(Item + 56), 0LL);
        Item = (__int64)UserServantCollectionEntity__GetOverwriteStatus(v80, v81, 0LL);
        if ( !Item )
          goto LABEL_112;
        v82 = *(_DWORD *)(Item + 24);
      }
      else
      {
        v83 = this->fields.baseUserCommandCodeEntity;
        if ( !v83 )
          goto LABEL_112;
        v84 = *(_OWORD *)&v83->fields.id.fields.fakeValue;
        *(_OWORD *)&v128.fields.currentCryptoKey = *(_OWORD *)&v83->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v128.fields.fakeValue = v84;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v123 = v128;
        v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v123, 0LL);
        v31 = System_Collections_Generic_Dictionary_long__long___get_Item(
                dic,
                v85,
                (const MethodInfo_3361B8C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
        Item = (__int64)v118;
        if ( !v118 )
          goto LABEL_112;
        Item = (__int64)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v118, v31, 0, 0LL);
        if ( !Item )
          goto LABEL_112;
        v82 = *(_DWORD *)(Item + 24);
        v81 = 0;
      }
      v119 = v82;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      format = LocalizationManager__Get((System_String_o *)StringLiteral_3623/*"COMMAND_CODE_REATTACH_MSG"*/, 0LL);
      Item = sub_1BCB0A0(object___TypeInfo, 6LL);
      v86 = this->fields.baseUserServantEntity;
      if ( !v86 )
        goto LABEL_112;
      v87 = Item;
      v89 = *(_QWORD *)&v86->fields.svtId.fields.currentCryptoKey;
      v88 = *(_QWORD *)&v86->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v133.fields.currentCryptoKey = v89;
      *(_QWORD *)&v133.fields.fakeValue = v88;
      Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v133, 0LL);
      if ( !Master_object )
        goto LABEL_112;
      Item = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                        Master_object,
                        Item,
                        DispLimitCountFromUserServantCollection,
                        0,
                        0LL);
      if ( !v87 )
        goto LABEL_112;
      v92 = Item;
      if ( !Item || (Item = sub_1BCB134(Item, *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v87 + 24) )
          goto LABEL_113;
        *(_QWORD *)(v87 + 32) = v92;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v87 + 32), v92, v90, v91);
        v93 = this->fields.baseUserCommandCodeEntity;
        if ( !v93 )
          goto LABEL_112;
        v94 = *(_OWORD *)&v93->fields.id.fields.fakeValue;
        *(_OWORD *)&v128.fields.currentCryptoKey = *(_OWORD *)&v93->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v128.fields.fakeValue = v94;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v122 = v128;
        v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v122, 0LL);
        v96 = System_Collections_Generic_Dictionary_long__long___get_Item(
                dic,
                v95,
                (const MethodInfo_3361B8C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
        Item = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(Master_object, v96, v81, 0, 0LL);
        v98 = Item;
        if ( !Item || (Item = sub_1BCB134(Item, *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v87 + 24) <= 1u )
            goto LABEL_113;
          *(_QWORD *)(v87 + 40) = v98;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v87 + 40), v98, v90, v97);
          Item = (__int64)ServantEntity__getClassName(v59, 0LL);
          v100 = Item;
          if ( !Item || (Item = sub_1BCB134(Item, *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v87 + 24) <= 2u )
              goto LABEL_113;
            *(_QWORD *)(v87 + 48) = v100;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v87 + 48), v100, v90, v99);
            Item = (__int64)ServantEntity__getClassName(v74, 0LL);
            v102 = Item;
            if ( !Item || (Item = sub_1BCB134(Item, *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v87 + 24) <= 3u )
                goto LABEL_113;
              *(_QWORD *)(v87 + 56) = v102;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v87 + 56), v102, v90, v101);
              if ( !Rarity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
              Item = (__int64)Rarity__getRarityType(rarityId, 0LL);
              v104 = Item;
              if ( !Item || (Item = sub_1BCB134(Item, *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v87 + 24) <= 4u )
                  goto LABEL_113;
                *(_QWORD *)(v87 + 64) = v104;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v87 + 64), v104, v90, v103);
                Item = (__int64)Rarity__getRarityType(v119, 0LL);
                v106 = Item;
                if ( !Item || (Item = sub_1BCB134(Item, *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v87 + 24) > 5u )
                  {
                    *(_QWORD *)(v87 + 72) = v106;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v87 + 72), v106, v90, v105);
                    v107 = System_String__Format_62491852(format, (System_Object_array *)v87, 0LL);
                    v109 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
                    if ( (*(_BYTE *)(v109 + 309) & 1) == 0 )
                      v109 = sub_1C1B45C(v108);
                    v110 = *(_QWORD *)(*(_QWORD *)(v109 + 192) + 16LL);
                    if ( (*(_BYTE *)(v110 + 309) & 1) == 0 )
                      v110 = sub_1C1B45C(v108);
                    v111 = **(CommonUI_o ***)(v110 + 184);
                    v112 = LocalizationManager__Get((System_String_o *)StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, 0LL);
                    v113 = LocalizationManager__Get((System_String_o *)StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, 0LL);
                    v114 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
                    CommonConfirmDialog_ClickDelegate___ctor(
                      v114,
                      (Il2CppObject *)v29,
                      Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__1__,
                      0LL);
                    if ( !v111 )
                      goto LABEL_112;
                    CommonUI__OpenConfirmDecideDlg(
                      v111,
                      v120,
                      v107,
                      v112,
                      v113,
                      v114,
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
                  sub_1BCB25C(Item, v31, v90);
                }
              }
            }
          }
        }
      }
      v115 = sub_1BCB278(Item);
      sub_1BCB120(v115, 0LL);
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
  if ( (byte_4B20248 & 1) == 0 )
  {
    sub_1BCAFF8(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    this = (CommandCardEquipmentControl_o *)sub_1BCAFF8(
                                              &Method_CommandCardEquipmentControl__OpenLockDialog_b__94_0__,
                                              v3);
    byte_4B20248 = 1;
  }
  monitor = v2[31].monitor;
  if ( !monitor
    || ((v5 = (BattleCommandData_o *)*((_QWORD *)monitor + 47)) == 0LL
      ? (IsEnableCommandCode = 0)
      : (IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(v5, 0LL)),
        klass = (CommandCardDialog_o *)v2[24].klass,
        v8 = (CommandCardDialog_ClickDelegate_o *)sub_1BCB244(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(v8, v2, Method_CommandCardEquipmentControl__OpenLockDialog_b__94_0__, v9),
        !klass) )
  {
    sub_1BCB254(this, method);
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

  if ( (byte_4B20249 & 1) == 0 )
  {
    sub_1BCAFF8(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_1BCAFF8(&Method_CommandCardEquipmentControl__OpenReturnDialog_b__95_0__, v3);
    byte_4B20249 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v8 = (CommandCardDialog_ClickDelegate_o *)sub_1BCB244(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenReturnDialog_b__95_0__,
          v9),
        !commandCardDialog) )
  {
    sub_1BCB254(targetCommandCardData, method);
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

  if ( (byte_4B20247 & 1) == 0 )
  {
    sub_1BCAFF8(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_1BCAFF8(&Method_CommandCardEquipmentControl__OpenUnlockDialog_b__93_0__, v3);
    byte_4B20247 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v8 = (CommandCardDialog_ClickDelegate_o *)sub_1BCB244(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenUnlockDialog_b__93_0__,
          v9),
        !commandCardDialog) )
  {
    sub_1BCB254(targetCommandCardData, method);
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
  char *AttachEffectOnCode; // x0
  const MethodInfo *v8; // x1
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  CommandCodeEffectComponent_o *v10; // x19
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CommandCodeEffectComponent_o *v17; // x22
  struct CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x8
  const MethodInfo *v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B2025A & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&targetCardIdx);
    byte_4B2025A = 1;
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v20, 0LL);
  AttachEffectOnCode = (char *)CommandCardEquipmentControl__CreateAttachEffectOnCard(this, targetCardIdx, v13, v14);
  if ( !AttachEffectOnCode )
    goto LABEL_14;
  v17 = (CommandCodeEffectComponent_o *)AttachEffectOnCode;
  if ( callback )
  {
    *((_QWORD *)AttachEffectOnCode + 27) = callback;
    sub_1BCAF9C((CGThumbnailListItem_o *)(AttachEffectOnCode + 216), (int32_t)callback, v15, v16);
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
    sub_1BCB254(AttachEffectOnCode, v8);
  }
  CommandCodeEffectComponent__PlayAnimation(v10, v8);
  CommandCodeEffectComponent__PlayAnimation(v17, v19);
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Component_o *v14; // x19
  __int64 v15; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Transform_o *v19; // x20
  const MethodInfo *v20; // x1

  if ( (byte_4B20259 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&lockCardIdx);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B20259 = 1;
  }
  lockEffect = (Il2CppObject *)this->fields.lockEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                lockEffect,
                                (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_20;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Component_object,
                                (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_20;
  v14 = (UnityEngine_Component_o *)Component_object;
  if ( callback )
  {
    *(_QWORD *)(Component_object + 216) = callback;
    sub_1BCAF9C((CGThumbnailListItem_o *)(Component_object + 216), (int32_t)callback, v12, v13);
  }
  Component_object = (__int64)UnityEngine_Component__get_transform(v14, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_20;
  if ( commandCardList->max_length <= lockCardIdx )
    sub_1BCB25C(Component_object, v11, v15);
  v17 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (__int64)commandCardList->m_Items[lockCardIdx];
  if ( !Component_object )
    goto LABEL_20;
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
  if ( !v17 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16191 )
  {
    Component_object = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B16191 = 1;
  }
  if ( !v18 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v14, 0LL);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16196 )
  {
    Component_object = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B16196 = 1;
  }
  if ( !v19 )
LABEL_20:
    sub_1BCB254(Component_object, v11);
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v14, v20);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int64 v22; // x22
  __int64 v23; // x23
  int32_t v24; // w0
  const MethodInfo *v25; // x3
  CommandCodeEffectComponent_o *v26; // x0
  Il2CppObject *commandCodeDetachEffect; // x23
  CommandCodeEffectComponent_o *v28; // x22
  UnityEngine_GameObject_o *v29; // x23
  UnityEngine_Transform_o *v30; // x24
  UnityEngine_Transform_o *v31; // x24
  System_Action_o *v32; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x24
  __int64 v36; // x2
  const MethodInfo *v37; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  const MethodInfo *v39; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4B2025B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&targetCardIdx);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, v7);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BCAFF8(&Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__0__, v11);
    sub_1BCAFF8(&Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__1__, v12);
    sub_1BCAFF8(&CommandCardEquipmentControl___c__DisplayClass124_0_TypeInfo, v13);
    byte_4B2025B = 1;
  }
  v14 = sub_1BCB244(CommandCardEquipmentControl___c__DisplayClass124_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_27;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 24), (int32_t)callback, v19, v20);
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  if ( !nowEquipedUserCommandCodeEntity )
    goto LABEL_27;
  v23 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v23;
  *(_QWORD *)&v40.fields.fakeValue = v22;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v40, 0LL);
  v26 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(this, targetCardIdx, v24, v25);
  commandCodeDetachEffect = (Il2CppObject *)this->fields.commandCodeDetachEffect;
  v28 = v26;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeDetachEffect,
                                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_27;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_27;
  v29 = Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !Component_object )
    goto LABEL_27;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.detachEffectPos, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)v29,
                                                   0LL);
  v30 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16191 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v16);
    byte_4B16191 = 1;
  }
  if ( !v30 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)v29,
                                                   0LL);
  v31 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16196 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v16);
    byte_4B16196 = 1;
  }
  if ( !v31 )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v32 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v14,
    Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__0__,
    0LL);
  if ( v32 )
  {
    v29[9].monitor = v32;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v29[9].monitor, (int32_t)v32, v33, v34);
  }
  v35 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v14,
    Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__1__,
    0LL);
  if ( v35 )
  {
    v29[9].klass = (UnityEngine_GameObject_c *)v35;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v29[9], (int32_t)v35, v36, v37);
  }
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_27;
  if ( commandCardList->max_length <= targetCardIdx )
    sub_1BCB25C(Component_object, v16, v36);
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCardIdx];
  if ( !Component_object
    || (CombineCommandCardComponent__HideCommandCodeSprite((CombineCommandCardComponent_o *)Component_object, v16),
        CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v29, v39),
        !v28) )
  {
LABEL_27:
    sub_1BCB254(Component_object, v16);
  }
  CommandCodeEffectComponent__PlayAnimation(v28, v16);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B2025C & 1) == 0 )
  {
    sub_1BCAFF8(&CommandCardEquipmentControl__PlayReplaceEffect_d__125_TypeInfo, *(_QWORD *)&targetCardIdx);
    byte_4B2025C = 1;
  }
  v7 = sub_1BCB244(CommandCardEquipmentControl__PlayReplaceEffect_d__125_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = targetCardIdx;
  *(_QWORD *)(v7 + 48) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)callback, v10, v11);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B2025D & 1) == 0 )
  {
    sub_1BCAFF8(&CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_TypeInfo, *(_QWORD *)&removeCardIdx);
    byte_4B2025D = 1;
  }
  v9 = sub_1BCB244(CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 40) = removeCardIdx;
  *(_DWORD *)(v9 + 44) = attachCardIdx;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 48), (int32_t)callback, v12, v13);
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
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Component_o *v14; // x21
  __int64 v15; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Transform_o *v19; // x22
  struct CombineCommandCardComponent_array *v20; // x8
  const MethodInfo *v21; // x1

  if ( (byte_4B20258 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&unlockCardIdx);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B20258 = 1;
  }
  unlockEffect = (Il2CppObject *)this->fields.unlockEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                unlockEffect,
                                (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Component_object,
                                (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_23;
  v14 = (UnityEngine_Component_o *)Component_object;
  if ( callback )
  {
    *(_QWORD *)(Component_object + 216) = callback;
    sub_1BCAF9C((CGThumbnailListItem_o *)(Component_object + 216), (int32_t)callback, v12, v13);
  }
  Component_object = (__int64)UnityEngine_Component__get_transform(v14, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_23;
  if ( commandCardList->max_length <= unlockCardIdx )
    goto LABEL_24;
  v17 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (__int64)commandCardList->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
  if ( !v17 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16191 )
  {
    Component_object = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B16191 = 1;
  }
  if ( !v18 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v14, 0LL);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B16196 )
  {
    Component_object = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B16196 = 1;
  }
  if ( !v19
    || (UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (v20 = this->fields.commandCardList) == 0LL) )
  {
LABEL_23:
    sub_1BCB254(Component_object, v11);
  }
  if ( v20->max_length <= unlockCardIdx )
LABEL_24:
    sub_1BCB25C(Component_object, v11, v15);
  Component_object = (__int64)v20->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_23;
  CombineCommandCardComponent__HideUnlockInfo((CombineCommandCardComponent_o *)Component_object, v11);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v14, v21);
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
  const MethodInfo *v12; // x3
  __int64 transformTotal; // x1
  UnityEngine_Component_o *messageTxtLabelSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_String_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_String_array *v22; // x20
  unsigned __int64 v23; // x21
  __int64 v24; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v26; // w22
  __int64 v27; // x23
  __int64 v28; // x24
  int32_t v29; // w23
  __int64 v30; // x2
  const MethodInfo *v31; // x3
  System_Action_o *v32; // x21
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B2023D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&AssetManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_CommandCardEquipmentControl_SetCommandCardList__, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1BCAFF8(&string___TypeInfo, v9);
    byte_4B2023D = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_39731636(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetList, 0, v11, v12);
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
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  if ( this->fields.baseUserServantEntity )
  {
    this->fields.LoadAfterCallback = callback;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.LoadAfterCallback, (int32_t)callback, v17, v18);
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
    v19 = (struct System_String_array *)sub_1BCB0A0(string___TypeInfo, transformTotal);
    this->fields.assetList = v19;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetList, (int32_t)v19, v20, v21);
    v22 = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v23 = 0LL;
      v24 = 32LL;
      while ( 1 )
      {
        messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
        if ( !messageTxtLabelSprite )
          break;
        messageTxtLabelSprite = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantId(
                                                             (UserServantEntity_o *)messageTxtLabelSprite,
                                                             v23,
                                                             0LL);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v26 = (int)messageTxtLabelSprite;
        v28 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v27 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v28;
        *(_QWORD *)&v34.fields.fakeValue = v27;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v34, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        messageTxtLabelSprite = (UnityEngine_Component_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                             v26,
                                                             v29,
                                                             0LL);
        if ( !v22 )
          break;
        if ( v23 >= v22->max_length )
          sub_1BCB25C(messageTxtLabelSprite, transformTotal, v30);
        *(Il2CppClass **)((char *)&v22->obj.klass + v24) = (Il2CppClass *)messageTxtLabelSprite;
        sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v22 + v24), (int32_t)messageTxtLabelSprite, v30, v31);
        v22 = this->fields.assetList;
        ++v23;
        v24 += 8LL;
        if ( (__int64)v23 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1BCB254(messageTxtLabelSprite, transformTotal);
    }
LABEL_30:
    v32 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_CommandCardEquipmentControl_SetCommandCardList__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_39729272(v22, v32, 1, 0LL);
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
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x2
  struct UICharaGraphTexture_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  this->fields.baseUserServantEntity = userServantEntity;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  CommandCardEquipmentControl__MoidfyUserSvtCommandCode(this, userServantEntity, v6);
  v7 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(CommandCardEquipmentControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, void *))this->klass->vtable._7_SetCharaGraph.method)(
                                         this,
                                         this->fields.charaGraph,
                                         userServantEntity,
                                         this->klass[1]._1.image);
  this->fields.charaGraph = v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetCommandCardDisplay(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  const MethodInfo *v7; // x2
  __int64 v8; // x2
  const MethodInfo *v9; // x3
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
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserCommandCodeEntity, 0, (int32_t)method, v3);
      CommandCardEquipmentControl__SetTargetIndexSelectSprite(this, index, v7);
      v10 = this->fields.commandCardList;
      if ( v10 )
      {
        if ( v10->max_length <= index )
          sub_1BCB25C(this, *(_QWORD *)&index, v8);
        v11 = v10->m_Items[index];
        this->fields.targetCommandCardData = v11;
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.targetCommandCardData, (int32_t)v11, v8, v9);
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
      sub_1BCB254(this, *(_QWORD *)&index);
    }
  }
}


void __fastcall CommandCardEquipmentControl__SetCommandCardEquipmentSkill(
        CommandCardEquipmentControl_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  CommandCardEquipmentControl_o *v3; // x19
  __int64 v4; // x2
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
  this = (CommandCardEquipmentControl_o *)SkillInfo__GetMargeExplanation_42652936(explanationList, 0LL);
  if ( !idList )
    goto LABEL_9;
  if ( !idList->max_length )
    goto LABEL_10;
  v5 = this;
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillIcon;
  if ( !this || (SkillIconComponent__Set_40207908((SkillIconComponent_o *)this, idList->m_Items[1], 1, 0LL), !titleList) )
LABEL_9:
    sub_1BCB254(this, userCommandCode);
  if ( !titleList->max_length )
LABEL_10:
    sub_1BCB25C(this, userCommandCode, v4);
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillName;
  if ( !this )
    goto LABEL_9;
  UILabel__set_text((UILabel_o *)this, titleList->m_Items[0], 0LL);
  WrapControlText__textBBCodeAdjust(v3->fields.commandCardEquipmentSkillDetail, (System_String_o *)v5, 22, 0, 0LL);
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
  int64_t v31; // x2
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
  const MethodInfo *v42; // x3
  BattleCommandData_o *v43; // x25
  const MethodInfo *v44; // x6
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  Il2CppObject *v47; // x23
  __int64 v48; // x21
  __int64 v49; // x26
  struct System_Int64_array *v50; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v52; // w3
  const MethodInfo *v53; // x1
  float v54; // s3
  float v55; // s0
  float v56; // s1
  float v57; // s2
  const MethodInfo *v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Action_o *LoadAfterCallback; // x20
  int32_t limitCount; // [xsp+4h] [xbp-7Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4B2023E & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCommandData_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B2023E = 1;
  }
  entity = 0LL;
  baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
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
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  limitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                 v14,
                 LimitCountByImageLimitCostumeIn,
                 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  v17 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
          v14,
          (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseUserServantEntity,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)baseUserServantEntity,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B165D1 = 1;
  }
  baseUserServantEntity = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    baseUserServantEntity = (__int64)NetworkManager_TypeInfo;
  }
  v20 = this->fields.baseUserServantEntity;
  if ( !v20 )
    goto LABEL_70;
  v22 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
  v23 = *(_QWORD *)(*(_QWORD *)(baseUserServantEntity + 184) + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v22;
  *(_QWORD *)&v64.fields.fakeValue = v21;
  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v64, 0LL);
  if ( !v19 )
    goto LABEL_70;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)v19,
    &entity,
    v23,
    (int)baseUserServantEntity,
    0LL);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
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
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
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
              goto LABEL_71;
            v38 = *((_DWORD *)&klass->_1.byval_arg.data + v34);
            if ( (unsigned int)(v38 - 1) <= 2 )
            {
              v39 = this->fields.commandCardList;
              if ( !v39 )
                break;
              if ( v34 >= v39->max_length )
                goto LABEL_71;
              v40 = v39->m_Items[v34];
              baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( !v40 )
                break;
              v40->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
              sub_1BCAF9C((CGThumbnailListItem_o *)&v40->fields.target, baseUserServantEntity, v41, v42);
              v43 = (BattleCommandData_o *)sub_1BCB244(BattleCommandData_TypeInfo);
              BattleCommandData___ctor_45632924(v43, v38, v14, limitCount, 0, -1, 0LL);
              if ( !v43 )
                break;
              v43->fields.markindex = v34;
              v43->fields.servantCardIdsIndex = v34;
              baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
              if ( baseUserServantCommandCodeEntity )
              {
                userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !userCommandCodeIds )
                  break;
                if ( v34 >= userCommandCodeIds->max_length )
LABEL_71:
                  sub_1BCB25C(baseUserServantEntity, method, v31);
                method = (const MethodInfo *)userCommandCodeIds->m_Items[v34];
                v43->fields.userCommandCodeId = (int64_t)method;
                if ( (__int64)method >= 1 )
                {
                  if ( !MasterData_object )
                    break;
                  v47 = MasterData_object;
                  baseUserServantEntity = (__int64)DataMasterBase_object__object__long___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                     (int64_t)method,
                                                     (const MethodInfo_32CA35C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
                  if ( !baseUserServantEntity )
                    break;
                  v48 = *(_QWORD *)(baseUserServantEntity + 80);
                  v49 = *(_QWORD *)(baseUserServantEntity + 88);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v65.fields.currentCryptoKey = v48;
                  *(_QWORD *)&v65.fields.fakeValue = v49;
                  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v65, 0LL);
                  v43->fields.commandCodeId = baseUserServantEntity;
                  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
                  MasterData_object = v47;
                  if ( !baseUserServantCommandCodeEntity )
                    break;
                }
                v50 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !v50 )
                  break;
                if ( v34 >= v50->max_length )
                  goto LABEL_71;
                v31 = v50->m_Items[v34];
              }
              else
              {
                v31 = -1LL;
              }
              if ( entity && (commandCardParam = entity->fields.commandCardParam) != 0LL )
              {
                if ( v34 >= commandCardParam->max_length )
                  goto LABEL_71;
                v52 = commandCardParam->m_Items[v34 + 1];
              }
              else
              {
                v52 = 0;
              }
              v43->fields.commandCardParam = v52;
              CombineCommandCardComponent__DispCommandCard(v40, v43, v31, v52, 0, 0, v44);
              v54 = 1.0;
              if ( this->fields.displayTransformIndex <= 0 )
                v55 = 1.0;
              else
                v55 = 0.5;
              v56 = v55;
              v57 = v55;
              CombineCommandCardComponent__SetColor(v40, *(UnityEngine_Color_o *)(&v54 - 3), v53);
              CombineCommandCardComponent__SetLayout(v40, this->fields.positionOffsetY, this->fields.scaleOffset, v58);
            }
          }
        }
        if ( v35 == ++v34 )
          goto LABEL_67;
      }
    }
LABEL_70:
    sub_1BCB254(baseUserServantEntity, method);
  }
LABEL_67:
  CommandCardEquipmentControl__SetExecuteButtonState(this, method);
  LoadAfterCallback = this->fields.LoadAfterCallback;
  if ( LoadAfterCallback )
  {
    this->fields.LoadAfterCallback = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.LoadAfterCallback, 0, v59, v60);
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
    sub_1BCB254(qpInfoObj, v3);
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

  if ( (byte_4B20253 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_4B20253 = 1;
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
    v8 = userCommandCodeId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v16, 0LL);
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
    sub_1BCB254(executeButton, v6);
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
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLabel; // x20

  if ( (byte_4B20252 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9161/*"N0"*/, method);
    byte_4B20252 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLabel = this->fields.haveQpLabel,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_63964312(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9161/*"N0"*/,
                         0LL),
        !haveQpLabel) )
  {
    sub_1BCB254(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLabel, (System_String_o *)SelfUserGame, 0LL);
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
    sub_1BCB254(removeButton, isEnable);
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
    sub_1BCB254(replaceButton, isEnable);
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
    sub_1BCB254(overwriteWarningLabel, method);
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
  const MethodInfo *v12; // x3
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
  __int64 v24; // x2
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

  if ( (byte_4B20242 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCode);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_4B20242 = 1;
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
      commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v43, 0LL);
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
        dispEquippedInfo = v23 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v42, 0LL);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserCommandCodeEntity, (int32_t)userCommandCode, v11, v12);
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
            sub_1BCB25C(commandCardInfoObj, userCommandCode, v24);
          v33 = v32->m_Items[v31];
          v35 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v45.fields.currentCryptoKey = v35;
          *(_QWORD *)&v45.fields.fakeValue = v34;
          commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v45, 0LL);
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
  v38 = this->fields.baseUserServantCommandCodeEntity;
  if ( v38 )
  {
    v39 = *(_OWORD *)&v38->fields.svtId.fields.fakeValue;
    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v38->fields.svtId.fields.currentCryptoKey;
    *(_OWORD *)&v44.fields.fakeValue = v39;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v41 = v44;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v41, 0LL) == equippedSvtId )
      v37 = -1;
  }
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentIcon;
  if ( !commandCardInfoObj )
LABEL_57:
    sub_1BCB254(commandCardInfoObj, userCommandCode);
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

  if ( (byte_4B20254 & 1) == 0 )
  {
    sub_1BCAFF8(&CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_3540/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, v8);
    sub_1BCAFF8(&StringLiteral_3537/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, v9);
    sub_1BCAFF8(&StringLiteral_3538/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/, v10);
    sub_1BCAFF8(&StringLiteral_3544/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, v11);
    sub_1BCAFF8(&StringLiteral_3542/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, v12);
    sub_1BCAFF8(&StringLiteral_3541/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/, v13);
    sub_1BCAFF8(&StringLiteral_12087/*"SHORT_ITEM_INFO_MSG"*/, v14);
    sub_1BCAFF8(&StringLiteral_3546/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/, v15);
    sub_1BCAFF8(&StringLiteral_12088/*"SHORT_QP_INFO_MSG"*/, v16);
    sub_1BCAFF8(&StringLiteral_3543/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/, v17);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v18);
    byte_4B20254 = 1;
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
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3537/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, 0LL);
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
      v24 = &StringLiteral_3538/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/;
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
                                                        (System_String_o *)StringLiteral_3543/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
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
          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3542/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, 0LL);
          goto LABEL_102;
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3544/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/,
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
          v28 = &StringLiteral_12088/*"SHORT_QP_INFO_MSG"*/;
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
          v28 = &StringLiteral_12087/*"SHORT_ITEM_INFO_MSG"*/;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v28 = &StringLiteral_3546/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/;
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
                                                        (System_String_o *)StringLiteral_3542/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/,
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
        sub_1BCB254(executeButtonSprite, *(_QWORD *)&state);
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
      executeButtonSprite = (UnityEngine_Color_o **)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                                      &v50,
                                                      0LL);
      v32 = this->fields.baseUserCommandCodeEntity;
      if ( !v32 )
        goto LABEL_104;
      v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      v34 = executeButtonSprite;
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v49.fields.fakeValue = v33;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v49, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3543/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/, 0LL);
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
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3540/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, 0LL);
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
      v24 = &StringLiteral_3541/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/;
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
        sub_1BCB25C(this, *(_QWORD *)&index, method);
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
    sub_1BCB254(this, *(_QWORD *)&index);
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
  __int64 v16; // x2
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  __int64 v18; // x22
  __int64 max_length; // x9
  __int64 v20; // x10
  __int64 v21; // x24
  __int64 v22; // x25
  unsigned __int64 v23; // x23
  __int64 v24; // x26
  __int64 v25; // x28
  __int64 v26; // x29
  bool v27; // w9
  Il2CppClass **v28; // x8
  LimitCntUpItemComponent_o *v29; // x21
  int64_t spendQpVal; // x8
  int64_t haveQpVal; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B2024A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BCAFF8(&StringLiteral_9161/*"N0"*/, v6);
    byte_4B2024A = 1;
  }
  CommandCardEquipmentControl__SetHaveQpInfo(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
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
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v32, 0LL);
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
  Instance = System_Int32__ToString_63959136((int)this + 520, (System_String_o *)StringLiteral_9161/*"N0"*/, 0LL);
  if ( !spendQpLabel )
    goto LABEL_43;
  UILabel__set_text(spendQpLabel, (System_String_o *)Instance, 0LL);
  unlockItemInfoList = this->fields.unlockItemInfoList;
  if ( !unlockItemInfoList )
    goto LABEL_43;
  v18 = v15[5];
  if ( !v18 )
    goto LABEL_43;
  max_length = unlockItemInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v20 = *(_QWORD *)(v18 + 24);
    v21 = v15[4];
    v22 = max_length - 1;
    v23 = 0LL;
    v24 = v18 + 32;
    v25 = (int)v20;
    v26 = v21 + 32;
    v27 = v20 << 32 > 0;
    do
    {
      if ( v23 >= unlockItemInfoList->max_length )
LABEL_42:
        sub_1BCB25C(Instance, v8, v16);
      v28 = &unlockItemInfoList->obj.klass + v23;
      v29 = (LimitCntUpItemComponent_o *)v28[4];
      if ( v27 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
          byte_4B165D1 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager_TypeInfo;
        }
        if ( v23 >= *(unsigned int *)(v18 + 24) )
          goto LABEL_42;
        if ( !v21 )
          break;
        if ( v23 >= *(unsigned int *)(v21 + 24) )
          goto LABEL_42;
        if ( !v29 )
          break;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v29,
          *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
          *(_DWORD *)(v24 + 4 * v23),
          *(_DWORD *)(v26 + 4 * v23),
          0LL);
        if ( v23 >= *(unsigned int *)(v18 + 24) || v23 >= *(unsigned int *)(v21 + 24) )
          goto LABEL_42;
        CombineMenuControl__AddCombineItemInfo(
          (CombineMenuControl_o *)this,
          *(_DWORD *)(v24 + 4 * v23),
          *(_DWORD *)(v26 + 4 * v23),
          0LL);
        if ( !v29->fields.isItemNum )
          this->fields.isShortNeedItem = 1;
      }
      else
      {
        if ( !v29 )
          break;
        LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)v28[4], 0LL);
      }
      if ( v22 == v23 )
        goto LABEL_36;
      unlockItemInfoList = this->fields.unlockItemInfoList;
      v27 = (__int64)++v23 < v25;
    }
    while ( unlockItemInfoList );
LABEL_43:
    sub_1BCB254(Instance, v8);
  }
LABEL_36:
  spendQpVal = this->fields.spendQpVal;
  haveQpVal = this->fields.haveQpVal;
  this->fields.isCanCombine = 1;
  this->fields.isShortQp = haveQpVal < spendQpVal;
  if ( haveQpVal < spendQpVal )
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

  if ( (byte_4B20264 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B20264 = 1;
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)CommonUI__get_IsEnableItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0
        && this->fields.baseUserServantEntity
        && (Instance = (UnityEngine_Component_o *)System_Linq_Enumerable__Any_object_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                    (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___),
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
    sub_1BCB254(Instance, v7);
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
  CommandCardDialog__Close_47393492(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestLockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1BCB254(commandCardDialog, isDecide);
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
    sub_1BCB254(0LL, isDecide);
  CommandCardDialog__Close_47393492(commandCardDialog, 0LL, method);
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
  CommandCardDialog__Close_47393492(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestUnlockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1BCB254(commandCardDialog, isDecide);
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

  if ( (byte_4B20257 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B20257 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v6, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardIndex(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  __int64 v4; // x1
  BattleCommandComponent_o *v5; // x0

  if ( (byte_4B20256 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B20256 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !v5 )
    sub_1BCB254(0LL, v4);
  return BattleCommandComponent__getMarkIndex(v5, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0

  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_1BCB254(0LL, method);
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

  if ( (byte_4B2023F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommandCardEquipmentControl_touchCommandCard__, *(_QWORD *)&index);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B2023F = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    if ( this->fields.displayTransformIndex >= 1 )
    {
      v6 = Method_CommandCardEquipmentControl_touchCommandCard__;
      if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1BCB010(Method_CommandCardEquipmentControl_touchCommandCard__);
      v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
LABEL_18:
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0LL);
      return;
    }
    targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    {
      v10 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
      if ( !v10 )
        sub_1BCB254(0LL, v9);
      v11 = BattleCommandComponent__getMarkIndex(v10, 0LL) == index;
    }
    else
    {
      v11 = 0;
    }
    v12 = Method_CommandCardEquipmentControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCB010(Method_CommandCardEquipmentControl_touchCommandCard__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v12, v12[4]);
    if ( v11 )
      goto LABEL_18;
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
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
  CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t targetCardIdx; // w21
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w0
  const MethodInfo *v13; // x3
  __int64 v14; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v16; // x9
  CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *v17; // x20
  Il2CppObject *v18; // x22
  System_Action_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o *klass; // x0
  UnityEngine_WaitForSeconds_o *v23; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  bool result; // w0
  System_Action_o *callback; // x0
  struct CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x8
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t v31; // w21
  __int64 v32; // x22
  __int64 v33; // x23
  int32_t v34; // w0
  const MethodInfo *v35; // x3
  UnityEngine_WaitForSeconds_o *v36; // x20
  CGThumbnailListItem_o *v37; // x19
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v2 = this;
  if ( (byte_4B2026B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)sub_1BCAFF8(
                                                                        &UnityEngine_WaitForSeconds_TypeInfo,
                                                                        v5);
    byte_4B2026B = 1;
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
          *(_QWORD *)&v40.fields.currentCryptoKey = v11;
          *(_QWORD *)&v40.fields.fakeValue = v10;
          v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v40, 0LL);
          this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                              _4__this,
                                                                              targetCardIdx,
                                                                              v12,
                                                                              v13);
          commandCardList = _4__this->fields.commandCardList;
          if ( commandCardList )
          {
            v16 = v2->fields.targetCardIdx;
            if ( (unsigned int)v16 >= commandCardList->max_length )
              sub_1BCB25C(this, method, v14);
            v17 = this;
            v18 = (Il2CppObject *)commandCardList->m_Items[v16];
            v19 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
            System_Action___ctor(v19, v18, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
            if ( v17 )
            {
              if ( v19 )
              {
                v17[4].klass = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_c *)v19;
                sub_1BCAF9C((CGThumbnailListItem_o *)&v17[4], (int32_t)v19, v20, v21);
              }
              klass = (System_Action_o *)v17[4].klass;
              if ( klass )
                ActionExtensions__Call(klass, 0LL);
              v23 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v23, 0.3, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v23;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1BCAF9C(p__2__current, (int32_t)v23, v25, v26);
              result = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
          }
        }
      }
LABEL_27:
      sub_1BCB254(this, method);
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
  v31 = v2->fields.targetCardIdx;
  v33 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v33;
  *(_QWORD *)&v41.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v41, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v31, v34, v35);
  v36 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v36, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v36;
  v37 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BCAF9C(v37, (int32_t)v36, v38, v39);
  LODWORD(v37[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_CommandCardEquipmentControl__PlayReplaceEffect_d__125_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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
  __int64 v14; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v16; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v17; // x21
  Il2CppObject *v18; // x23
  System_Action_o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o *klass; // x0
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t attachCardIdx; // w21
  __int64 v25; // x22
  __int64 v26; // x23
  int32_t v27; // w0
  const MethodInfo *v28; // x3
  struct CombineCommandCardComponent_array *v29; // x8
  __int64 v30; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v31; // x20
  Il2CppObject *v32; // x22
  System_Action_o *v33; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Action_o *v36; // x0
  UnityEngine_WaitForSeconds_o *v37; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  bool result; // w0
  System_Action_o *callback; // x0
  struct CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x8
  struct UserCommandCodeEntity_o *v44; // x8
  int32_t v45; // w21
  __int64 v46; // x22
  __int64 v47; // x23
  int32_t v48; // w0
  const MethodInfo *v49; // x3
  UnityEngine_WaitForSeconds_o *v50; // x20
  CGThumbnailListItem_o *v51; // x19
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v2 = this;
  if ( (byte_4B2026C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)sub_1BCAFF8(
                                                                                  &UnityEngine_WaitForSeconds_TypeInfo,
                                                                                  v5);
    byte_4B2026C = 1;
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
      *(_QWORD *)&v54.fields.currentCryptoKey = v11;
      *(_QWORD *)&v54.fields.fakeValue = v10;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v54, 0LL);
      this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                    _4__this,
                                                                                    removeCardIdx,
                                                                                    v12,
                                                                                    v13);
      commandCardList = _4__this->fields.commandCardList;
      if ( !commandCardList )
        goto LABEL_40;
      v16 = v2->fields.removeCardIdx;
      if ( (unsigned int)v16 < commandCardList->max_length )
      {
        v17 = this;
        v18 = (Il2CppObject *)commandCardList->m_Items[v16];
        v19 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(v19, v18, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
        if ( !v17 )
          goto LABEL_40;
        if ( v19 )
        {
          v17[4].klass = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_c *)v19;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v17[4], (int32_t)v19, v20, v21);
        }
        klass = (System_Action_o *)v17[4].klass;
        if ( klass )
          ActionExtensions__Call(klass, 0LL);
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( !nowEquipedUserCommandCodeEntity )
          goto LABEL_27;
        attachCardIdx = v2->fields.attachCardIdx;
        v26 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
        v25 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v55.fields.currentCryptoKey = v26;
        *(_QWORD *)&v55.fields.fakeValue = v25;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v55, 0LL);
        this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                      _4__this,
                                                                                      attachCardIdx,
                                                                                      v27,
                                                                                      v28);
        v29 = _4__this->fields.commandCardList;
        if ( !v29 )
LABEL_40:
          sub_1BCB254(this, method);
        v30 = v2->fields.attachCardIdx;
        if ( (unsigned int)v30 < v29->max_length )
        {
          v31 = this;
          v32 = (Il2CppObject *)v29->m_Items[v30];
          v33 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(v33, v32, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
          if ( v31 )
          {
            if ( v33 )
            {
              v31[4].klass = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_c *)v33;
              sub_1BCAF9C((CGThumbnailListItem_o *)&v31[4], (int32_t)v33, v34, v35);
            }
            v36 = (System_Action_o *)v31[4].klass;
            if ( v36 )
              ActionExtensions__Call(v36, 0LL);
LABEL_27:
            v37 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v37, 0.3, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v37;
            p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
            sub_1BCAF9C(p__2__current, (int32_t)v37, v39, v40);
            result = 1;
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return result;
          }
          goto LABEL_40;
        }
      }
      sub_1BCB25C(this, method, v14);
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
  v44 = _4__this->fields.baseUserCommandCodeEntity;
  if ( !v44 )
    goto LABEL_40;
  v45 = v2->fields.attachCardIdx;
  v47 = *(_QWORD *)&v44->fields.commandCodeId.fields.currentCryptoKey;
  v46 = *(_QWORD *)&v44->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v56.fields.currentCryptoKey = v47;
  *(_QWORD *)&v56.fields.fakeValue = v46;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v56, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v45, v48, v49);
  v50 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v50, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v50;
  v51 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BCAF9C(v51, (int32_t)v50, v52, v53);
  LODWORD(v51[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B20267 & 1) == 0 )
  {
    sub_1BCAFF8(&CommandCardEquipmentControl___c_TypeInfo, v1);
    byte_4B20267 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(CommandCardEquipmentControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommandCardEquipmentControl___c_TypeInfo->static_fields->__9 = (struct CommandCardEquipmentControl___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)CommandCardEquipmentControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4B20268 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B20268 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
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
    sub_1BCB254(this, method);
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
  if ( (byte_4B20269 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)sub_1BCAFF8(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    isDecide);
    byte_4B20269 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_9:
      sub_1BCB254(this, isDecide);
    }
    CombineRootComponent__RequestSelfAttachReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( (byte_4B2026A & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)sub_1BCAFF8(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    isDecide);
    byte_4B2026A = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_11:
      sub_1BCB254(this, isDecide);
    }
    if ( v4->fields.isCommandCardEmpty )
      CombineRootComponent__RequestEquipCommandCode((CombineRootComponent_o *)this, 0LL);
    else
      CombineRootComponent__RequestReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}