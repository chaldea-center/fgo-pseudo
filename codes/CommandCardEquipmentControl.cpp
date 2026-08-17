void CommandCardEquipmentControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  struct CommandCardEquipmentControl_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct CommandCardEquipmentControl_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  struct CommandCardEquipmentControl_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  struct CommandCardEquipmentControl_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  struct CommandCardEquipmentControl_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  struct CommandCardEquipmentControl_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w1
  struct CommandCardEquipmentControl_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int32_t v57; // w1
  struct CommandCardEquipmentControl_StaticFields *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  int32_t v65; // w1
  struct CommandCardEquipmentControl_StaticFields *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7

  if ( (byte_5974A87 & 1) == 0 )
  {
    sub_2213A60(&CommandCardEquipmentControl_TypeInfo);
    sub_2213A60(&StringLiteral_21639/*"img_txt_equipcc_3"*/);
    sub_2213A60(&StringLiteral_21638/*"img_txt_equipcc_1"*/);
    sub_2213A60(&StringLiteral_21097/*"icon_arrow_pink"*/);
    sub_2213A60(&StringLiteral_18345/*"btn_txt_notequipcc"*/);
    sub_2213A60(&StringLiteral_18364/*"btn_txt_replace"*/);
    sub_2213A60(&StringLiteral_21728/*"img_txt_unlockcc"*/);
    sub_2213A60(&StringLiteral_18335/*"btn_txt_equipcc"*/);
    sub_2213A60(&StringLiteral_21640/*"img_txt_equipcc_4"*/);
    sub_2213A60(&StringLiteral_18394/*"btn_txt_unlockcc"*/);
    byte_5974A87 = 1;
  }
  CommandCardEquipmentControl_TypeInfo->static_fields->defaultDetailColor = (struct UnityEngine_Color_o)xmmword_E9CD90;
  v7 = StringLiteral_21097/*"icon_arrow_pink"*/;
  static_fields = CommandCardEquipmentControl_TypeInfo->static_fields;
  static_fields->DEFAULT_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_21097/*"icon_arrow_pink"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->DEFAULT_MESSAGE_SPRITE_NAME,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v9 = StringLiteral_21728/*"img_txt_unlockcc"*/;
  v10 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v10->UNLOCK_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_21728/*"img_txt_unlockcc"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->UNLOCK_MESSAGE_SPRITE_NAME, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_21638/*"img_txt_equipcc_1"*/;
  v18 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v18->EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_21638/*"img_txt_equipcc_1"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->EQUIPED_MESSAGE_SPRITE_NAME, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_21639/*"img_txt_equipcc_3"*/;
  v26 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v26->SELECTED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_21639/*"img_txt_equipcc_3"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->SELECTED_MESSAGE_SPRITE_NAME, v25, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_21640/*"img_txt_equipcc_4"*/;
  v34 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v34->NOT_EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_21640/*"img_txt_equipcc_4"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v34->NOT_EQUIPED_MESSAGE_SPRITE_NAME,
    v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = StringLiteral_18394/*"btn_txt_unlockcc"*/;
  v42 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v42->UNLOCK_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_18394/*"btn_txt_unlockcc"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v42->UNLOCK_EXE_BTN_SPRITE_NAME, v41, v43, v44, v45, v46, v47, v48);
  v49 = StringLiteral_18335/*"btn_txt_equipcc"*/;
  v50 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v50->EQUIP_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_18335/*"btn_txt_equipcc"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->EQUIP_EXE_BTN_SPRITE_NAME, v49, v51, v52, v53, v54, v55, v56);
  v57 = StringLiteral_18364/*"btn_txt_replace"*/;
  v58 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v58->REPLACE_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_18364/*"btn_txt_replace"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v58->REPLACE_EXE_BTN_SPRITE_NAME, v57, v59, v60, v61, v62, v63, v64);
  v65 = StringLiteral_18345/*"btn_txt_notequipcc"*/;
  v66 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v66->NOT_EQUIP_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_18345/*"btn_txt_notequipcc"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v66->NOT_EQUIP_EXE_BTN_SPRITE_NAME,
    v65,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
}


void CommandCardEquipmentControl___ctor(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  if ( (byte_5974A86 & 1) == 0 )
  {
    sub_2213A60(&CombineMenuControl_TypeInfo);
    byte_5974A86 = 1;
  }
  if ( !*(&CombineMenuControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
        CommandCardEquipmentControl_o *this,
        int32_t nowKind,
        const MethodInfo *method)
{
  struct UserCommandCodeEntity_o **p_nowEquipedUserCommandCodeEntity; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  UnityEngine_Component_o *lockButton; // x0
  const MethodInfo *v14; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x21
  int64_t v17; // x21
  Il2CppObject *Entity; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
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
  UILabel_o *commandCardNotEquippedDetail; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-40h]

  if ( (byte_5974A60 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3722/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/);
    byte_5974A60 = 1;
  }
  CommandCardEquipmentControl__InitDisplayInfo(this, *(const MethodInfo **)&nowKind);
  p_nowEquipedUserCommandCodeEntity = &this->fields.nowEquipedUserCommandCodeEntity;
  this->fields.nowEquipedUserCommandCodeEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    0,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  lockButton = (UnityEngine_Component_o *)this->fields.lockButton;
  if ( !nowKind )
  {
    if ( lockButton )
    {
      lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0);
      if ( lockButton )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
        lockButton = (UnityEngine_Component_o *)this->fields.commandCardInfoObj;
        if ( lockButton )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
          lockButton = (UnityEngine_Component_o *)this->fields.unlockItemInfoObj;
          if ( lockButton )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0);
            lockButton = (UnityEngine_Component_o *)this->fields.commandCardNotEquippedInfoObj;
            if ( lockButton )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
              lockButton = (UnityEngine_Component_o *)this->fields.cancelButton;
              if ( lockButton )
              {
                lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0);
                if ( lockButton )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
                  lockButton = (UnityEngine_Component_o *)this->fields.qpInfoObj;
                  if ( lockButton )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0);
                    CommandCardEquipmentControl__SetUnlockItemInfo(this, v32);
                    goto LABEL_47;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_48;
  }
  if ( !lockButton )
    goto LABEL_48;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0);
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0);
  if ( nowKind == 1 )
  {
    if ( !this->fields.baseUserCommandCodeEntity )
    {
      lockButton = (UnityEngine_Component_o *)this->fields.commandCardInfoObj;
      if ( !lockButton )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
      lockButton = (UnityEngine_Component_o *)this->fields.unlockItemInfoObj;
      if ( !lockButton )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
      CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v33);
      CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v34);
      lockButton = (UnityEngine_Component_o *)this->fields.cancelButton;
      if ( !lockButton )
        goto LABEL_48;
      lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0);
      if ( !lockButton )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
      lockButton = (UnityEngine_Component_o *)this->fields.qpInfoObj;
      if ( !lockButton )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
      lockButton = (UnityEngine_Component_o *)this->fields.commandCardNotEquippedInfoObj;
      if ( !lockButton )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0);
    }
    commandCardNotEquippedDetail = this->fields.commandCardNotEquippedDetail;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    lockButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3722/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, 0);
    if ( commandCardNotEquippedDetail )
    {
      UILabel__set_text(commandCardNotEquippedDetail, (System_String_o *)lockButton, 0);
      goto LABEL_47;
    }
LABEL_48:
    sub_2213CDC(lockButton, v12);
  }
  if ( nowKind != 2 )
    goto LABEL_47;
  lockButton = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !lockButton )
    goto LABEL_48;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0);
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0);
  lockButton = (UnityEngine_Component_o *)this->fields.commandCardInfoObj;
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0);
  lockButton = (UnityEngine_Component_o *)this->fields.unlockItemInfoObj;
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
  lockButton = (UnityEngine_Component_o *)this->fields.commandCardNotEquippedInfoObj;
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
  CommandCardEquipmentControl__SetRemoveButttonState(this, 1, v14);
  lockButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !lockButton )
    goto LABEL_48;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0);
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
  lockButton = (UnityEngine_Component_o *)this->fields.qpInfoObj;
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
  if ( !baseUserServantCommandCodeEntity )
    goto LABEL_48;
  lockButton = (UnityEngine_Component_o *)this->fields.targetCommandCardData;
  if ( !lockButton )
    goto LABEL_48;
  userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
  lockButton = (UnityEngine_Component_o *)BattleCommandComponent__getMarkIndex(
                                            (BattleCommandComponent_o *)lockButton,
                                            0);
  if ( !userCommandCodeIds )
    goto LABEL_48;
  if ( (unsigned int)lockButton >= LODWORD(userCommandCodeIds->max_length) )
    sub_2213CE4(lockButton);
  v17 = userCommandCodeIds->m_Items[(int)lockButton];
  lockButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lockButton )
    goto LABEL_48;
  lockButton = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)lockButton,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !lockButton )
    goto LABEL_48;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)lockButton,
             v17,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  *p_nowEquipedUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    (int32_t)Entity,
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
  *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v37.fields.fakeValue = v26;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
  v36 = v37;
  v27 = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v36, 0);
  v29 = CommandCardEquipmentControl__EnableReplace(v27, (int64_t)v27, v28);
  CommandCardEquipmentControl__SetReplaceButtonState(this, v29, v30);
  CommandCardEquipmentControl__SetSelectedCommandCodeInfo(this, (UserCommandCodeEntity_o *)Entity, 0, -1, v31);
LABEL_47:
  CommandCardEquipmentControl__UpdateItemLinkListWindowButton(this, v12);
}


bool CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(
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
  if ( (byte_5974A65 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
    this = (CommandCardEquipmentControl_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A65 = 1;
  }
  baseUserCommandCodeEntity = v4->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_8;
  v6 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, dic);
  v8 = v9;
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v8, 0);
  if ( !dic )
LABEL_8:
    sub_2213CDC(this, dic);
  return System_Collections_Generic_Dictionary_long__long___ContainsKey(
           dic,
           (int64_t)this,
           (const MethodInfo_3FCC8F4 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
}


void CommandCardEquipmentControl__CheckOpenDialogType(CommandCardEquipmentControl_o *this, const MethodInfo *method)
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
  struct CombineRootComponent_o *combineRootComponent; // x8

  if ( (byte_5974A64 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A64 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Master_object = (UserServantCommandCodeMaster_o *)UnityEngine_Object__op_Inequality(targetCommandCardData, 0, 0);
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
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
      Master_object = (UserServantCommandCodeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
      if ( Master_object )
      {
        EquippedCommandCodeDic = UserServantCommandCodeMaster__GetEquippedCommandCodeDic(Master_object, 0);
        if ( data && BattleCommandData__IsEnableCommandCode(data, 0) )
        {
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v8) )
          {
            v11 = this;
            v12 = EquippedCommandCodeDic;
            v13 = 0;
LABEL_17:
            CommandCardEquipmentControl__OpenEquippedCommandCodeAttachDialog(v11, v12, v13, v10);
            return;
          }
          Master_object = (UserServantCommandCodeMaster_o *)this->fields.combineRootComponent;
          if ( !Master_object )
            goto LABEL_26;
          CombineRootComponent__RequestReplaceCommandCode((CombineRootComponent_o *)Master_object, 0);
        }
        else
        {
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v8) )
          {
            v11 = this;
            v12 = EquippedCommandCodeDic;
            v13 = 1;
            goto LABEL_17;
          }
          Master_object = (UserServantCommandCodeMaster_o *)this->fields.combineRootComponent;
          if ( !Master_object )
            goto LABEL_26;
          CombineRootComponent__RequestEquipCommandCode((CombineRootComponent_o *)Master_object, 0);
        }
        combineRootComponent = this->fields.combineRootComponent;
        if ( combineRootComponent )
        {
          combineRootComponent->fields._IsExeButtonProcessing_k__BackingField = 0;
          return;
        }
      }
    }
LABEL_26:
    sub_2213CDC(Master_object, v5);
  }
}


void CommandCardEquipmentControl__CheckSelectedBaseServant(
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-40h]

  if ( (byte_5974A5C & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A5C = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v6 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v23.fields.fakeValue = v6;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
      v22 = v23;
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v22, 0);
      v8 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v21.fields.fakeValue = v8;
      if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v21, 0) )
      {
        CommandCardEquipmentControl__InitDisplayInfo(this, (const MethodInfo *)selectBase);
        CommandCardEquipmentControl__InitDispCommandCardInfo(this, v9);
        CommandCardEquipmentControl__InitCommandCodeInfo(this, v10);
      }
    }
    baseSelectInfoObj = this->fields.baseSelectInfoObj;
    if ( !baseSelectInfoObj )
      sub_2213CDC(0, selectBase);
    UnityEngine_GameObject__SetActive(baseSelectInfoObj, 0, 0);
  }
  else
  {
    CommandCardEquipmentControl__InitDispBaseServantInfo(this, (const MethodInfo *)selectBase);
    CommandCardEquipmentControl__InitDisplayInfo(this, v18);
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, v19);
    CommandCardEquipmentControl__InitCommandCodeInfo(this, v20);
  }
  this->fields.baseUserServantEntity = selectBase;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBase,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__CloseRemoveCommandCodeDialog(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  BaseDialog_o *commandCardDialog; // x0

  commandCardDialog = (BaseDialog_o *)this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  BaseDialog__SafeClose(commandCardDialog, 0, 0);
  this->fields.isProcessingButton = 0;
  if ( isDecide )
  {
    commandCardDialog = (BaseDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestRemoveCommandCode((CombineRootComponent_o *)commandCardDialog, 0);
      return;
    }
LABEL_6:
    sub_2213CDC(commandCardDialog, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEffectComponent_o *CommandCardEquipmentControl__CreateAttachEffectOnCard(
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

  if ( (byte_5974A7F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A7F = 1;
  }
  commandCodeAppearEffect = (Il2CppObject *)this->fields.commandCodeAppearEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetCommandCardIdx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeAppearEffect,
                                                   (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v10 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( LODWORD(commandCardList->max_length) <= targetCommandCardIdx )
    sub_2213CE4(Component_object);
  v12 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0);
  if ( !v12 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)Component_object, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v10, 0);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE0 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v10, 0);
  v14 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE5 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v14 )
LABEL_18:
    sub_2213CDC(Component_object, v9);
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v10, commandCodeId, v15);
  return (CommandCodeEffectComponent_o *)v10;
}


CommandCodeEffectComponent_o *CommandCardEquipmentControl__CreateAttachEffectOnCode(
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

  if ( (byte_5974A81 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A81 = 1;
  }
  commandCodeFlashEffect = (Il2CppObject *)this->fields.commandCodeFlashEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeFlashEffect,
                                                   (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_17;
  v6 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_17;
  v8 = (UnityEngine_Transform_o *)Component_object;
  Component_object = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0);
  if ( !v8 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)Component_object, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v6, 0);
  v9 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE0 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v9 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v6, 0);
  v10 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE5 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v10 )
LABEL_17:
    sub_2213CDC(Component_object, v5);
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return (CommandCodeEffectComponent_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEffectComponent_o *CommandCardEquipmentControl__CreateRemoveEffectOnCard(
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

  if ( (byte_5974A7E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A7E = 1;
  }
  commandCardDetachEffect = (Il2CppObject *)this->fields.commandCardDetachEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetCommandCardIdx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCardDetachEffect,
                                                   (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v10 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( LODWORD(commandCardList->max_length) <= targetCommandCardIdx )
    sub_2213CE4(Component_object);
  v12 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0);
  if ( !v12 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)Component_object, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v10, 0);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE0 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v10, 0);
  v14 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE5 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v14 )
LABEL_18:
    sub_2213CDC(Component_object, v9);
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v10, commandCodeId, v15);
  return (CommandCodeEffectComponent_o *)v10;
}


CommandCodeEffectComponent_o *CommandCardEquipmentControl__CreateReplaceEffectOnCode(
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

  if ( (byte_5974A80 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A80 = 1;
  }
  commandCodeReplaceEffect = (Il2CppObject *)this->fields.commandCodeReplaceEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeReplaceEffect,
                                                   (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_17;
  v6 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_17;
  v8 = (UnityEngine_Transform_o *)Component_object;
  Component_object = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0);
  if ( !v8 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)Component_object, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v6, 0);
  v9 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE0 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v9 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v6, 0);
  v10 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE5 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v10 )
LABEL_17:
    sub_2213CDC(Component_object, v5);
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return (CommandCodeEffectComponent_o *)v6;
}


bool CommandCardEquipmentControl__EnableReplace(
        CommandCardEquipmentControl_o *this,
        int64_t nowEquipedUserCommandCodeId,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v5; // x1
  UserCommandCodeEntity_array *List; // x0
  __int64 v7; // x1
  UserCommandCodeEntity_array *v8; // x20
  System_Collections_Generic_List_long__o *EquipedCommandCodeList; // x21
  il2cpp_array_size_t max_length; // x23
  BalanceConfig_c *v11; // x8
  __int64 v12; // x24
  int v13; // w25
  UserCommandCodeEntity_o *v14; // x29
  __int128 v15; // q1
  int v16; // w8
  __int128 v17; // q1
  int v18; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+40h] [xbp-80h]

  if ( (byte_5974A61 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Contains__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A61 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, nowEquipedUserCommandCodeId);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_32;
  List = UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Master_object, 0);
  if ( !List || (v8 = List, !List->max_length) )
  {
LABEL_29:
    LOBYTE(Master_object) = 1;
    return Master_object;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
  if ( !Master_object )
LABEL_32:
    sub_2213CDC(Master_object, v5);
  EquipedCommandCodeList = UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                             (UserServantCommandCodeMaster_o *)Master_object,
                             0);
  max_length = v8->max_length;
  v11 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    v11 = BalanceConfig_TypeInfo;
  }
  Master_object = 1;
  if ( v11->static_fields->CommandCodeFrameMax <= (int)max_length && (int)max_length >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= LODWORD(v8->max_length) )
        sub_2213CE4(Master_object);
      v14 = v8->m_Items[v12];
      if ( !v14 )
        goto LABEL_32;
      v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
      v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v22.fields.fakeValue = v15;
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
      v21 = v22;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v21, 0);
      if ( Master_object != nowEquipedUserCommandCodeId )
      {
        v17 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
        v18 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v22.fields.fakeValue = v17;
        if ( !v18 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
        v20 = v22;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v20, 0);
        if ( !EquipedCommandCodeList )
          goto LABEL_32;
        Master_object = System_Collections_Generic_List_long___Contains(
                          EquipedCommandCodeList,
                          Master_object,
                          (const MethodInfo_446C61C *)Method_System_Collections_Generic_List_long__Contains__);
        if ( (Master_object & 1) != 0 )
        {
          Master_object = (int64_t)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
            Master_object = (int64_t)BalanceConfig_TypeInfo;
          }
          if ( ++v13 >= *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 160LL) )
            break;
        }
      }
      if ( (_DWORD)max_length == (_DWORD)++v12 )
        goto LABEL_29;
    }
    LOBYTE(Master_object) = 0;
  }
  return Master_object;
}


UserCommandCodeEntity_o *CommandCardEquipmentControl__GetBaseSelectedCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  return this->fields.baseUserCommandCodeEntity;
}


UserServantEntity_o *CommandCardEquipmentControl__GetBaseSelectedServant(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *v3; // x8
  Il2CppObject **p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v6; // q0
  __int128 v7; // q1
  int v8; // w8
  __int64 v9; // x1
  int64_t v10; // x20
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  if ( (byte_5974A75 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A75 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  p_baseUserServantEntity = (Il2CppObject **)&this->fields.baseUserServantEntity;
  v3 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0;
  v6 = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  v7 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  v8 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v15.fields.currentCryptoKey = v6;
  *(_OWORD *)&v15.fields.fakeValue = v7;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v14 = v15;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v14, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v12);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    p_baseUserServantEntity,
    v10,
    (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return (UserServantEntity_o *)*p_baseUserServantEntity;
}


int32_t CommandCardEquipmentControl__GetCommandCodeId(
        CommandCardEquipmentControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppClass *klass; // x19
  void *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_5974A5B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974A5B = 1;
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


bool CommandCardEquipmentControl__GetExeBtnState(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_5974A63 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A63 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Inequality(targetCommandCardData, 0, 0);
}


UserCommandCodeEntity_o *CommandCardEquipmentControl__GetNowEquipedCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  return this->fields.nowEquipedUserCommandCodeEntity;
}


// local variable allocation has failed, the output may be wrong!
int64_t CommandCardEquipmentControl__GetTargetIndexCommandCodeId(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8

  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
  if ( !baseUserServantCommandCodeEntity )
    return -1;
  userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    sub_2213CDC(this, *(_QWORD *)&index);
  if ( LODWORD(userCommandCodeIds->max_length) <= index )
    sub_2213CE4(this);
  return userCommandCodeIds->m_Items[index];
}


int32_t CommandCardEquipmentControl__GetTutorialOpenType(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  return 47;
}


void CommandCardEquipmentControl__InitCommandCardSelectStatus(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CombineCommandCardComponent_array *commandCardList; // x8
  il2cpp_array_size_t max_length; // x20
  CommandCardEquipmentControl_o *v10; // x19
  __int64 v11; // x21
  struct CombineCommandCardComponent_array *v12; // x8

  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_11;
  max_length = commandCardList->max_length;
  v10 = this;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = v10->fields.commandCardList;
      if ( !v12 )
        break;
      if ( (unsigned int)v11 >= LODWORD(v12->max_length) )
        sub_2213CE4(this);
      this = (CommandCardEquipmentControl_o *)v12->m_Items[v11];
      if ( !this )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)this, 0, 0);
      if ( (_DWORD)max_length == (_DWORD)++v11 )
        goto LABEL_8;
    }
LABEL_11:
    sub_2213CDC(this, method);
  }
LABEL_8:
  v10->fields.targetCommandCardData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields.targetCommandCardData, 0, v2, v3, v4, v5, v6, v7);
  this = (CommandCardEquipmentControl_o *)v10->fields.lockButton;
  if ( !this )
    goto LABEL_11;
  this = (CommandCardEquipmentControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void CommandCardEquipmentControl__InitCommandCodeInfo(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandCardInfoObj; // x0

  commandCardInfoObj = this->fields.commandCardInfoObj;
  if ( !commandCardInfoObj
    || (UnityEngine_GameObject__SetActive(commandCardInfoObj, 0, 0),
        (commandCardInfoObj = this->fields.unlockItemInfoObj) == 0)
    || (UnityEngine_GameObject__SetActive(commandCardInfoObj, 0, 0),
        (commandCardInfoObj = this->fields.commandCardNotEquippedInfoObj) == 0) )
  {
    sub_2213CDC(commandCardInfoObj, method);
  }
  UnityEngine_GameObject__SetActive(commandCardInfoObj, 0, 0);
}


void CommandCardEquipmentControl__InitCommnadCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  LimitCntUpItemComponent_o *baseSelectInfoObj; // x0
  const MethodInfo *v5; // x1
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  il2cpp_array_size_t max_length; // x20
  __int64 v8; // x21
  struct LimitCntUpItemComponent_array *v9; // x8
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  CommandCardEquipmentControl__InitCommandCodeInfo(this, v3);
  unlockItemInfoList = this->fields.unlockItemInfoList;
  if ( !unlockItemInfoList )
    goto LABEL_10;
  max_length = unlockItemInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = this->fields.unlockItemInfoList;
      if ( !v9 )
        break;
      if ( (unsigned int)v8 >= LODWORD(v9->max_length) )
        sub_2213CE4(baseSelectInfoObj);
      baseSelectInfoObj = v9->m_Items[v8];
      if ( !baseSelectInfoObj )
        break;
      LimitCntUpItemComponent__enableDispItemInfo(baseSelectInfoObj, 0);
      if ( (_DWORD)max_length == (_DWORD)++v8 )
        goto LABEL_8;
    }
LABEL_10:
    sub_2213CDC(baseSelectInfoObj, v5);
  }
LABEL_8:
  CommandCardEquipmentControl__InitTransformInfo(this, v5);
  CommandCardEquipmentControl__InitDisplayInfo(this, v10);
  CommandCardEquipmentControl__InitDispCommandCardInfo(this, v11);
  CommandCardEquipmentControl__InitDispBaseServantInfo(this, v12);
  baseSelectInfoObj = (LimitCntUpItemComponent_o *)this->fields.baseSelectInfoObj;
  if ( !baseSelectInfoObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSelectInfoObj, 1, 0);
}


void CommandCardEquipmentControl__InitDispBaseServantInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  UnityEngine_GameObject_o *cardSwitchButton; // x0
  __int64 v29; // x1
  UnityEngine_Object_o *charaGraph; // x20
  MissionNaviTransitionBoardItem_o *p_charaGraph; // x19
  __int64 v32; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_5974A58 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A58 = 1;
  }
  this->fields.baseUserServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3, v4, v5, v6, v7);
  this->fields.baseUserServantCommandCodeEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantCommandCodeEntity,
    0,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.baseUserCommandCodeEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserCommandCodeEntity,
    0,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.nowEquipedUserCommandCodeEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    0,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  cardSwitchButton = this->fields.cardSwitchButton;
  if ( !cardSwitchButton )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph;
    cardSwitchButton = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)cardSwitchButton,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      p_charaGraph->klass = 0;
      sub_2213A04(p_charaGraph, 0, v34, v35, v36, v37, v38, v39);
      return;
    }
LABEL_12:
    sub_2213CDC(cardSwitchButton, v27);
  }
}


void CommandCardEquipmentControl__InitDispCommandCardInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  UnityEngine_Component_o *lockButton; // x0
  struct CombineCommandCardComponent_array *commandCardList; // x8
  il2cpp_array_size_t max_length; // x21
  __int64 v13; // x22
  struct CombineCommandCardComponent_array *v14; // x8
  Il2CppClass **v15; // x8
  CombineCommandCardComponent_o *v16; // x20

  this->fields.targetCommandCardData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.targetCommandCardData, 0, v2, v3, v4, v5, v6, v7);
  lockButton = (UnityEngine_Component_o *)this->fields.lockButton;
  if ( !lockButton )
    goto LABEL_13;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0);
  if ( !lockButton )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
  lockButton = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
  if ( !lockButton )
    goto LABEL_13;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0);
  if ( !lockButton )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_13;
  max_length = commandCardList->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = this->fields.commandCardList;
      if ( !v14 )
        break;
      if ( (unsigned int)v13 >= LODWORD(v14->max_length) )
        sub_2213CE4(lockButton);
      v15 = &v14->obj.klass + v13;
      v16 = (CombineCommandCardComponent_o *)v15[4];
      if ( !v16 )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)v15[4], 0, 0);
      CombineCommandCardComponent__SetCommandCardEnable(v16, 0, 0);
      if ( (_DWORD)max_length == (_DWORD)++v13 )
        return;
    }
LABEL_13:
    sub_2213CDC(lockButton, v9);
  }
}


void CommandCardEquipmentControl__InitDisplayInfo(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *qpInfoObj; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  qpInfoObj = this->fields.qpInfoObj;
  if ( !qpInfoObj
    || (UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0),
        (qpInfoObj = (UnityEngine_GameObject_o *)this->fields.spendQpLabel) == 0) )
  {
    sub_2213CDC(qpInfoObj, method);
  }
  v5.fields.r = 1.0;
  v5.fields.g = 1.0;
  v5.fields.b = 1.0;
  v5.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)qpInfoObj, v5, 0);
  this->fields.isShortNeedItem = 0;
  *(_WORD *)&this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v4);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
}


void CommandCardEquipmentControl__InitTransformInfo(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *cardSwitchButton; // x0

  cardSwitchButton = this->fields.cardSwitchButton;
  if ( !cardSwitchButton
    || (UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0),
        (cardSwitchButton = (UnityEngine_GameObject_o *)this->fields.transformSvtName) == 0)
    || (cardSwitchButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cardSwitchButton, 0)) == 0 )
  {
    sub_2213CDC(cardSwitchButton, method);
  }
  UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0);
  CombineMenuControl__SetTransformInfo((CombineMenuControl_o *)this, 0);
}


bool CommandCardEquipmentControl__IsSelectedCommandCard(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_5974A84 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A84 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Inequality(targetCommandCardData, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CommandCardEquipmentControl__IsTransformedServant(
        CommandCardEquipmentControl_o *this,
        int32_t displayIndex,
        const MethodInfo *method)
{
  CommandCardEquipmentControl_o *v4; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  bool v8; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_5974A82 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974A82 = 1;
  }
  if ( v4->fields._IsSaveTransformServant_k__BackingField )
  {
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      sub_2213CDC(this, *(_QWORD *)&displayIndex);
    v6 = *(_QWORD *)&baseUserServantEntity->fields.transformVal.fields.currentCryptoKey;
    v7 = *(_QWORD *)&baseUserServantEntity->fields.transformVal.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&displayIndex);
    *(_QWORD *)&v10.fields.currentCryptoKey = v6;
    *(_QWORD *)&v10.fields.fakeValue = v7;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v10, 0) == displayIndex;
  }
  else
  {
    v8 = displayIndex <= 0 || !v4->fields._IsTransformServant_k__BackingField;
  }
  return !v8;
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__ModifyCommandCard(
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

  v4 = this;
  if ( (byte_5974A5A & 1) == 0 )
  {
    this = (CommandCardEquipmentControl_o *)sub_2213A60(&BattleCommandData_TypeInfo);
    byte_5974A5A = 1;
  }
  commandCardList = v4->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_11;
  if ( LODWORD(commandCardList->max_length) <= cardIndex )
    goto LABEL_12;
  v6 = commandCardList->m_Items[cardIndex];
  if ( !v6
    || (data = v6->fields.data,
        v8 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo),
        BattleCommandData___ctor_53637512(v8, data, 0),
        (baseUserServantCommandCodeEntity = v4->fields.baseUserServantCommandCodeEntity) == 0)
    || (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) == 0 )
  {
LABEL_11:
    sub_2213CDC(this, *(_QWORD *)&cardIndex);
  }
  if ( LODWORD(userCommandCodeIds->max_length) <= cardIndex )
LABEL_12:
    sub_2213CE4(this);
  if ( !v8 )
    goto LABEL_11;
  v12 = userCommandCodeIds->m_Items[cardIndex];
  v8->fields.userCommandCodeId = v12;
  v8->fields.commandCodeId = CommandCardEquipmentControl__GetCommandCodeId(this, v12, v9);
  CombineCommandCardComponent__ModifyCommandCard(v6, v8, v12, 0);
  CombineCommandCardComponent__SetLayout(v6, v4->fields.positionOffsetY, v4->fields.scaleOffset, 0);
}


void CommandCardEquipmentControl__MoidfyUserSvtCommandCode(
        CommandCardEquipmentControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v8; // x20
  __int64 v9; // x23
  int64_t v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  struct UserServantCommandCodeEntity_o **p_baseUserServantCommandCodeEntity; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_5974A59 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974A59 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !userServantEntity )
    goto LABEL_18;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v10 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v20.fields.currentCryptoKey = v9;
  *(_QWORD *)&v20.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
  if ( !MasterData_object )
LABEL_18:
    sub_2213CDC(Instance, v6);
  if ( UserServantCommandCodeMaster__TryGetEntity(
         (UserServantCommandCodeMaster_o *)MasterData_object,
         &entity,
         v10,
         (int)Instance,
         0) )
  {
    v17 = (int)entity;
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    this->fields.baseUserServantCommandCodeEntity = entity;
  }
  else
  {
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    v17 = 0;
    this->fields.baseUserServantCommandCodeEntity = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_baseUserServantCommandCodeEntity, v17, v11, v12, v13, v14, v15, v16);
}


void CommandCardEquipmentControl__OnClickCommandCode(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_5974A70 & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardEquipmentControl_OnClickCommandCode__);
    byte_5974A70 = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnClickCommandCode__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickCommandCode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_CommandCardEquipmentControl_OnClickCommandCode__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_2213CDC(0, v5);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0);
}


void CommandCardEquipmentControl__OnClickEmptyEquip(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_5974A6F & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardEquipmentControl_OnClickEmptyEquip__);
    byte_5974A6F = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnClickEmptyEquip__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickEmptyEquip__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_CommandCardEquipmentControl_OnClickEmptyEquip__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_2213CDC(0, v5);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0);
}


void CommandCardEquipmentControl__OnClickSwitchButton(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  _BOOL4 IsSaveTransformServant_k__BackingField; // w8
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t v5; // w2
  struct UnityEngine_Color_o *p_CondTitleLabelColor_k__BackingField; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  int32_t v10; // w2
  struct UnityEngine_Color_o *p_CondTitleSpriteColor_k__BackingField; // x8
  float *v12; // x9
  float *v13; // x10
  float *v14; // x11
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UISprite_o *executeButtonSprite; // x20
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  bool v27; // w1
  UnityEngine_Object_o *targetCommandCardData; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v30; // x2
  UnityEngine_GameObject_o *v31; // x0
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  TransformServantInfo_o *v34; // [xsp+0h] [xbp-30h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974A83 & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardEquipmentControl_OnClickSwitchButton__);
    sub_2213A60(&CommandCardEquipmentControl_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A83 = 1;
  }
  IsSaveTransformServant_k__BackingField = this->fields._IsSaveTransformServant_k__BackingField;
  v34 = 0;
  transformInfo = 0;
  if ( IsSaveTransformServant_k__BackingField )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    v5 = this->fields.displayTransformIndex ^ 1;
    this->fields.displayTransformIndex = v5;
    if ( !baseUserServantEntity )
      goto LABEL_44;
    baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedServantInfo(
                                                     baseUserServantEntity,
                                                     &transformInfo,
                                                     v5,
                                                     0);
    if ( !transformInfo )
      goto LABEL_44;
    baseUserServantEntity = (UserServantEntity_o *)this->fields.transformSvtName;
    if ( !baseUserServantEntity )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)baseUserServantEntity, transformInfo->fields.titleText, 0);
    baseUserServantEntity = (UserServantEntity_o *)this->fields.transformSvtName;
    if ( this->fields.displayTransformIndex <= 0 )
    {
      p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColor_k__BackingField;
      p_g = &this->fields._CondTitleLabelColor_k__BackingField.fields.g;
      p_b = &this->fields._CondTitleLabelColor_k__BackingField.fields.b;
      p_a = &this->fields._CondTitleLabelColor_k__BackingField.fields.a;
      if ( !baseUserServantEntity )
        goto LABEL_44;
    }
    else
    {
      p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColorAfter_k__BackingField;
      p_g = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.g;
      p_b = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.b;
      p_a = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.a;
      if ( !baseUserServantEntity )
        goto LABEL_44;
    }
    v36.fields.a = *p_a;
    v36.fields.b = *p_b;
    v36.fields.g = *p_g;
    v36.fields.r = p_CondTitleLabelColor_k__BackingField->fields.r;
    UIWidget__set_color((UIWidget_o *)baseUserServantEntity, v36, 0);
    baseUserServantEntity = (UserServantEntity_o *)this->fields.transformBgSprite;
    if ( this->fields.displayTransformIndex <= 0 )
    {
      p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
      v12 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
      v13 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
      v14 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
      if ( !baseUserServantEntity )
        goto LABEL_44;
    }
    else
    {
      p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColorAfter_k__BackingField;
      v12 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g;
      v13 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.b;
      v14 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.a;
      if ( !baseUserServantEntity )
        goto LABEL_44;
    }
    v37.fields.a = *v14;
    v37.fields.b = *v13;
    v37.fields.g = *v12;
    v37.fields.r = p_CondTitleSpriteColor_k__BackingField->fields.r;
    UIWidget__set_color((UIWidget_o *)baseUserServantEntity, v37, 0);
  }
  else if ( this->fields._IsTransformServant_k__BackingField )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    v10 = (this->fields.displayTransformIndex + 1) % this->fields.transformTotal;
    this->fields.displayTransformIndex = v10;
    if ( !baseUserServantEntity )
      goto LABEL_44;
    baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedServantInfo(
                                                     baseUserServantEntity,
                                                     &v34,
                                                     v10,
                                                     0);
    if ( !v34 )
      goto LABEL_44;
    baseUserServantEntity = (UserServantEntity_o *)this->fields.transformSvtName;
    if ( !baseUserServantEntity )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)baseUserServantEntity, v34->fields.titleText, 0);
  }
  CommandCardEquipmentControl__SetCommandCardList(this, method);
  if ( CommandCardEquipmentControl__IsTransformedServant(this, this->fields.displayTransformIndex, v15) )
  {
    this->fields.baseUserCommandCodeEntity = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserCommandCodeEntity,
      0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    executeButtonSprite = this->fields.executeButtonSprite;
    baseUserServantEntity = (UserServantEntity_o *)CommandCardEquipmentControl_TypeInfo;
    if ( !*(&CommandCardEquipmentControl_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, method);
    if ( executeButtonSprite )
    {
      UISprite__set_spriteName(
        executeButtonSprite,
        CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME,
        0);
      baseUserServantEntity = (UserServantEntity_o *)this->fields.executeButtonSprite;
      if ( baseUserServantEntity )
      {
        ((void (__fastcall *)(UserServantEntity_o *, void *))baseUserServantEntity->klass[1].vtable._6_getSkillLevelList.method)(
          baseUserServantEntity,
          baseUserServantEntity->klass[2]._1.image);
        CommandCardEquipmentControl__InitCommandCodeInfo(this, v24);
        CommandCardEquipmentControl__InitDisplayInfo(this, v25);
        baseUserServantEntity = (UserServantEntity_o *)this->fields.messageTxtLabelSprite;
        if ( baseUserServantEntity )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0);
          baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(gameObject, 0);
          if ( baseUserServantEntity )
          {
            baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)baseUserServantEntity,
                                                             0);
            if ( baseUserServantEntity )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, 0, 0);
              baseUserServantEntity = (UserServantEntity_o *)this->fields.lockButton;
              if ( baseUserServantEntity )
              {
                baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)baseUserServantEntity,
                                                                 0);
                if ( baseUserServantEntity )
                {
                  v27 = 0;
                  goto LABEL_41;
                }
              }
            }
          }
        }
      }
    }
LABEL_44:
    sub_2213CDC(baseUserServantEntity, method);
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(targetCommandCardData, 0, 0) )
  {
    baseUserServantEntity = (UserServantEntity_o *)this->fields.targetCommandCardData;
    if ( !baseUserServantEntity )
      goto LABEL_44;
    MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)baseUserServantEntity, 0);
    CommandCardEquipmentControl__SetCommandCardDisplay(this, MarkIndex, v30);
  }
  baseUserServantEntity = (UserServantEntity_o *)this->fields.messageTxtLabelSprite;
  if ( !baseUserServantEntity )
    goto LABEL_44;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0);
  baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(v31, 0);
  if ( !baseUserServantEntity )
    goto LABEL_44;
  baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)baseUserServantEntity,
                                                   0);
  if ( !baseUserServantEntity )
    goto LABEL_44;
  v27 = 1;
LABEL_41:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v27, 0);
  v32 = Method_CommandCardEquipmentControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_2213A78(Method_CommandCardEquipmentControl_OnClickSwitchButton__);
  v33 = (System_Reflection_MethodBase_o *)sub_2213A44(v32, v32[4]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0);
}


void CommandCardEquipmentControl__OnLockCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5974A6B & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__);
    byte_5974A6B = 1;
  }
  if ( !this->fields.isProcessingButton )
  {
    this->fields.isProcessingButton = 1;
    v3 = Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CommandCardEquipmentControl__OpenLockDialog(this, v5);
  }
}


void CommandCardEquipmentControl__OnLongPushCommandCode(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  MissionNaviTransitionBoardItem_o *p_baseUserCommandCodeEntity; // x19
  MissionNaviTransitionBoardItem_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  Il2CppType byval_arg; // q1
  Il2CppObject *Entity; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  CommandCardEquipmentControl___c_c *v18; // x8
  UserCommandCodeEntity_o *v19; // x19
  CommonUI_o *v20; // x20
  struct CommandCardEquipmentControl___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__107_0; // x21
  Il2CppObject *v23; // x22
  struct CommandCardEquipmentControl___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-50h]

  if ( (byte_5974A71 & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardEquipmentControl_OnLongPushCommandCode__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__107_0__);
    sub_2213A60(&CommandCardEquipmentControl___c_TypeInfo);
    byte_5974A71 = 1;
  }
  if ( this->fields.baseUserCommandCodeEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    p_baseUserCommandCodeEntity = (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserCommandCodeEntity;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    klass = p_baseUserCommandCodeEntity->klass;
    if ( !p_baseUserCommandCodeEntity->klass )
      goto LABEL_20;
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    byval_arg = klass->_1.byval_arg;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v32.fields.fakeValue = byval_arg;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    v31 = v32;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v31, 0);
    if ( !v7 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__long___GetEntity(
               v7,
               (int64_t)Instance,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_baseUserCommandCodeEntity->klass = (MissionNaviTransitionBoardItem_c *)Entity;
    sub_2213A04(p_baseUserCommandCodeEntity, (int32_t)Entity, v10, v11, v12, v13, v14, v15);
    v16 = Method_CommandCardEquipmentControl_OnLongPushCommandCode__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLongPushCommandCode__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_2213A78(Method_CommandCardEquipmentControl_OnLongPushCommandCode__);
    v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = CommandCardEquipmentControl___c_TypeInfo;
    v19 = (UserCommandCodeEntity_o *)p_baseUserCommandCodeEntity->klass;
    v20 = (CommonUI_o *)Instance;
    if ( !*(&CommandCardEquipmentControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl___c_TypeInfo, v4);
      v18 = CommandCardEquipmentControl___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__107_0 = static_fields->__9__107_0;
    if ( !_9__107_0 )
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v4);
        static_fields = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__107_0 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        _9__107_0,
        v23,
        Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__107_0__,
        0);
      v24 = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      v24->__9__107_0 = _9__107_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v24->__9__107_0,
        (int32_t)_9__107_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    if ( !v20 )
LABEL_20:
      sub_2213CDC(Instance, v4);
    CommonUI__OpenServantStatusDialog_37385832(v20, 0, v19, _9__107_0, 0, 0);
  }
}


void CommandCardEquipmentControl__OnRemoveCommandCardEquipment(
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

  if ( (byte_5974A6C & 1) == 0 )
  {
    sub_2213A60(&CommandCardDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__);
    sub_2213A60(&Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__);
    byte_5974A6C = 1;
  }
  if ( !this->fields.isProcessingButton )
  {
    this->fields.isProcessingButton = 1;
    v3 = Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    commandCardDialog = this->fields.commandCardDialog;
    nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
    v7 = (CommandCardDialog_ClickDelegate_o *)sub_2213CCC(CommandCardDialog_ClickDelegate_TypeInfo);
    CommandCardDialog_ClickDelegate___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__,
      v8);
    if ( !commandCardDialog )
      sub_2213CDC(v9, v10);
    CommandCardDialog__OpenRemoveEquip(commandCardDialog, nowEquipedUserCommandCodeEntity, v7, v11);
  }
}


void CommandCardEquipmentControl__OnReplaceCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_5974A6D & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__);
    byte_5974A6D = 1;
  }
  if ( this->fields.nowEquipedUserCommandCodeEntity )
  {
    v3 = Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      sub_2213CDC(0, v5);
    CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0);
  }
}


void CommandCardEquipmentControl__OnReplaceReset(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  const MethodInfo *v15; // x2

  if ( (byte_5974A6E & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardEquipmentControl_OnReplaceReset__);
    byte_5974A6E = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnReplaceReset__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_CommandCardEquipmentControl_OnReplaceReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  this->fields.baseUserCommandCodeEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseUserCommandCodeEntity, 0, v5, v6, v7, v8, v9, v10);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_2213CDC(v11, v12);
  CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
    this,
    targetCommandCardData->fields._NowKind_k__BackingField,
    v13);
  CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v15);
}


void CommandCardEquipmentControl__OpenEquippedCommandCodeAttachDialog(
        CommandCardEquipmentControl_o *this,
        System_Collections_Generic_Dictionary_long__long__o *dic,
        bool isCommandCardEmpty,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 Item; // x0
  int64_t v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  LocalizationManager_c *v17; // x0
  System_String_o *v18; // x27
  System_String_o *v19; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  System_String_o *v21; // x19
  __int64 v22; // x23
  __int64 v23; // x24
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int v25; // w23
  __int128 v26; // q0
  __int128 v27; // q1
  int v28; // w8
  struct UserCommandCodeEntity_o *v29; // x8
  __int128 v30; // q0
  __int128 v31; // q1
  UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x22
  int v33; // w8
  __int64 v34; // x1
  long double v35; // q0
  __int64 v36; // x0
  __int64 v37; // x0
  CommonUI_o *v38; // x21
  System_String_o *v39; // x22
  System_String_o *v40; // x23
  CommonConfirmDialog_ClickDelegate_o *v41; // x24
  Il2CppObject *Master_object; // x26
  Il2CppObject *v43; // x29
  Il2CppObject *v44; // x19
  struct UserServantEntity_o *v45; // x8
  UserServantCollectionMaster_o *v46; // x28
  __int64 v47; // x24
  __int64 v48; // x25
  ServantEntity_o *v49; // x24
  struct UserServantEntity_o *v50; // x9
  __int64 v51; // x27
  __int64 v52; // x29
  int64_t v53; // x25
  UserServantCollectionEntity_o *v54; // x25
  int32_t DispLimitCountFromUserServantCollection; // w29
  struct UserServantEntity_o *v56; // x8
  __int64 v57; // x25
  __int64 v58; // x27
  struct UserCommandCodeEntity_o *v59; // x9
  __int128 v60; // q1
  int32_t v61; // w25
  int32_t v62; // w0
  ServantEntity_o *v63; // x27
  struct UserCommandCodeEntity_o *v64; // x9
  __int128 v65; // q0
  __int128 v66; // q1
  int64_t v67; // x19
  int v68; // w9
  int64_t v69; // x0
  int32_t v70; // w0
  UserServantCollectionEntity_o *v71; // x19
  int32_t v72; // w25
  int32_t v73; // w8
  struct CombineRootComponent_o *combineRootComponent; // x8
  struct UserCommandCodeEntity_o *v75; // x8
  __int128 v76; // q1
  int64_t v77; // x0
  struct UserServantEntity_o *v78; // x8
  System_Object_array *v79; // x19
  __int64 v80; // x26
  __int64 v81; // x28
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  Il2CppObject *v88; // x29
  __int64 v89; // x1
  struct UserCommandCodeEntity_o *v90; // x8
  __int128 v91; // q1
  int64_t v92; // x0
  int32_t v93; // w0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  Il2CppObject *v100; // x21
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  Il2CppObject *v107; // x21
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  Il2CppObject *v114; // x21
  __int64 v115; // x1
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  Il2CppObject *v122; // x21
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  Il2CppObject *v129; // x21
  System_String_o *v130; // x19
  long double v131; // q0
  __int64 v132; // x8
  __int64 v133; // x0
  CommonUI_o *v134; // x21
  System_String_o *v135; // x22
  System_String_o *v136; // x23
  CommonConfirmDialog_ClickDelegate_o *v137; // x24
  __int64 v138; // x0
  System_String_o *format; // [xsp+48h] [xbp-168h]
  int32_t rarityId; // [xsp+54h] [xbp-15Ch]
  ServantLimitMaster_o *v141; // [xsp+58h] [xbp-158h]
  int32_t v142; // [xsp+58h] [xbp-158h]
  System_String_o *v143; // [xsp+60h] [xbp-150h]
  ServantLimitImageMaster_o *v144; // [xsp+68h] [xbp-148h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+130h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16

  if ( (byte_5974A66 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_2213A60(&Method_CommandCardEquipmentControl___c__DisplayClass94_0__OpenEquippedCommandCodeAttachDialog_b__0__);
    sub_2213A60(&Method_CommandCardEquipmentControl___c__DisplayClass94_0__OpenEquippedCommandCodeAttachDialog_b__1__);
    sub_2213A60(&CommandCardEquipmentControl___c__DisplayClass94_0_TypeInfo);
    sub_2213A60(&StringLiteral_3802/*"COMMAND_CODE_REATTACH_TITLE"*/);
    sub_2213A60(&StringLiteral_3800/*"COMMAND_CODE_REATTACH_MSG"*/);
    sub_2213A60(&StringLiteral_3801/*"COMMAND_CODE_REATTACH_SELF_MSG"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    byte_5974A66 = 1;
  }
  v7 = sub_2213CCC(CommandCardEquipmentControl___c__DisplayClass94_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_113;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v17 = LocalizationManager_TypeInfo;
  *(_BYTE *)(v7 + 24) = isCommandCardEmpty;
  if ( !*(&v17->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v17, v16);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"COMMAND_CODE_REATTACH_TITLE"*/, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, 0);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v21 = v19;
    v22 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    *(_QWORD *)&v152.fields.currentCryptoKey = v22;
    *(_QWORD *)&v152.fields.fakeValue = v23;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v152, 0);
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
      goto LABEL_113;
    v25 = Item;
    v26 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    v27 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    v28 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v151.fields.currentCryptoKey = v26;
    *(_OWORD *)&v151.fields.fakeValue = v27;
    if ( !v28 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    v150 = v151;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v150, 0);
    if ( !dic )
      goto LABEL_113;
    Item = System_Collections_Generic_Dictionary_long__long___get_Item(
             dic,
             Item,
             (const MethodInfo_3FCC660 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    if ( Item == v25 )
    {
      v29 = this->fields.baseUserCommandCodeEntity;
      if ( v29 )
      {
        v30 = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
        v31 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
        baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
        v33 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v151.fields.currentCryptoKey = v30;
        *(_OWORD *)&v151.fields.fakeValue = v31;
        if ( !v33 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
        v149 = v151;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v149, 0);
        if ( baseUserServantCommandCodeEntity )
        {
          this->fields._selectedSelfAttachCommandCardIdx_k__BackingField = UserServantCommandCodeEntity__GetUserCommandCodeNumber(
                                                                             baseUserServantCommandCodeEntity,
                                                                             Item,
                                                                             0);
          v36 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
          if ( (*(_WORD *)(v36 + 309) & 1) == 0 )
            v36 = sub_224B908(v35);
          v37 = *(_QWORD *)(*(_QWORD *)(v36 + 192) + 16LL);
          if ( (*(_WORD *)(v37 + 309) & 1) == 0 )
            v37 = sub_224B908(v35);
          v38 = **(CommonUI_o ***)(v37 + 184);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
          v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
          v41 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v41,
            (Il2CppObject *)v7,
            Method_CommandCardEquipmentControl___c__DisplayClass94_0__OpenEquippedCommandCodeAttachDialog_b__0__,
            0);
          if ( v38 )
          {
            CommonUI__OpenConfirmDecideDlg(v38, v18, v21, v39, v40, v41, 26, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0, 0);
            return;
          }
        }
      }
LABEL_113:
      sub_2213CDC(Item, v9);
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v43 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v44 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v45 = this->fields.baseUserServantEntity;
  if ( !v45 )
    goto LABEL_113;
  v46 = (UserServantCollectionMaster_o *)Item;
  v47 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v153.fields.currentCryptoKey = v47;
  *(_QWORD *)&v153.fields.fakeValue = v48;
  v144 = (ServantLimitImageMaster_o *)Master_object;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v153, 0);
  if ( !v44 )
    goto LABEL_113;
  Item = (__int64)DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)v44,
                    Item,
                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Item )
    goto LABEL_69;
  v49 = (ServantEntity_o *)Item;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Item = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    Item = (__int64)NetworkManager_TypeInfo;
  }
  v50 = this->fields.baseUserServantEntity;
  v141 = (ServantLimitMaster_o *)v43;
  v143 = v18;
  if ( !v50 )
    goto LABEL_113;
  v51 = *(_QWORD *)&v50->fields.svtId.fields.currentCryptoKey;
  v52 = *(_QWORD *)&v50->fields.svtId.fields.fakeValue;
  v53 = *(_QWORD *)(*(_QWORD *)(Item + 184) + 64LL);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v154.fields.currentCryptoKey = v51;
  *(_QWORD *)&v154.fields.fakeValue = v52;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v154, 0);
  if ( !v46 )
    goto LABEL_113;
  Item = (__int64)UserServantCollectionMaster__GetEntity(v46, v53, Item, 0);
  if ( Item )
  {
    v54 = (UserServantCollectionEntity_o *)Item;
    DispLimitCountFromUserServantCollection = ServantEntity__GetDispLimitCountFromUserServantCollection(
                                                v49,
                                                *(_DWORD *)(Item + 64),
                                                0);
    Item = (__int64)UserServantCollectionEntity__GetOverwriteStatus(v54, DispLimitCountFromUserServantCollection, 0);
    if ( !Item )
      goto LABEL_113;
  }
  else
  {
    v56 = this->fields.baseUserServantEntity;
    if ( !v56 )
      goto LABEL_113;
    v57 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
    v58 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    *(_QWORD *)&v155.fields.currentCryptoKey = v57;
    *(_QWORD *)&v155.fields.fakeValue = v58;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v155, 0);
    if ( !v141 )
      goto LABEL_113;
    Item = (__int64)ServantLimitMaster__GetEntity(v141, Item, 0, 0);
    if ( !Item )
      goto LABEL_113;
    DispLimitCountFromUserServantCollection = 0;
  }
  v59 = this->fields.baseUserCommandCodeEntity;
  if ( !v59 )
    goto LABEL_113;
  v60 = *(_OWORD *)&v59->fields.id.fields.fakeValue;
  v61 = *(_DWORD *)(Item + 24);
  *(_OWORD *)&v151.fields.currentCryptoKey = *(_OWORD *)&v59->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v151.fields.fakeValue = v60;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
  v148 = v151;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v148, 0);
  if ( !dic )
    goto LABEL_113;
  v62 = System_Collections_Generic_Dictionary_long__long___get_Item(
          dic,
          Item,
          (const MethodInfo_3FCC660 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  Item = (__int64)DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)v44,
                    v62,
                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Item )
  {
LABEL_69:
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_113;
    combineRootComponent->fields._IsExeButtonProcessing_k__BackingField = 0;
    return;
  }
  v63 = (ServantEntity_o *)Item;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Item = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    Item = (__int64)NetworkManager_TypeInfo;
  }
  v64 = this->fields.baseUserCommandCodeEntity;
  if ( !v64 )
    goto LABEL_113;
  v65 = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
  v66 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
  v67 = *(_QWORD *)(*(_QWORD *)(Item + 184) + 64LL);
  v68 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v151.fields.currentCryptoKey = v65;
  *(_OWORD *)&v151.fields.fakeValue = v66;
  if ( !v68 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
  v147 = v151;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v147, 0);
  v70 = System_Collections_Generic_Dictionary_long__long___get_Item(
          dic,
          v69,
          (const MethodInfo_3FCC660 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  Item = (__int64)UserServantCollectionMaster__GetEntity(v46, v67, v70, 0);
  rarityId = v61;
  if ( Item )
  {
    v71 = (UserServantCollectionEntity_o *)Item;
    v72 = ServantEntity__GetDispLimitCountFromUserServantCollection(v63, *(_DWORD *)(Item + 64), 0);
    Item = (__int64)UserServantCollectionEntity__GetOverwriteStatus(v71, v72, 0);
    if ( !Item )
      goto LABEL_113;
    v73 = *(_DWORD *)(Item + 24);
  }
  else
  {
    v75 = this->fields.baseUserCommandCodeEntity;
    if ( !v75 )
      goto LABEL_113;
    v76 = *(_OWORD *)&v75->fields.id.fields.fakeValue;
    *(_OWORD *)&v151.fields.currentCryptoKey = *(_OWORD *)&v75->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v151.fields.fakeValue = v76;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    v146 = v151;
    v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v146, 0);
    v9 = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v77,
           (const MethodInfo_3FCC660 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    Item = (__int64)v141;
    if ( !v141 )
      goto LABEL_113;
    Item = (__int64)ServantLimitMaster__GetEntity(v141, v9, 0, 0);
    if ( !Item )
      goto LABEL_113;
    v73 = *(_DWORD *)(Item + 24);
    v72 = 0;
  }
  v142 = v73;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  format = LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COMMAND_CODE_REATTACH_MSG"*/, 0);
  Item = sub_2213B20(object___TypeInfo, 6);
  v78 = this->fields.baseUserServantEntity;
  if ( !v78 )
    goto LABEL_113;
  v79 = (System_Object_array *)Item;
  v80 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
  v81 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v156.fields.currentCryptoKey = v80;
  *(_QWORD *)&v156.fields.fakeValue = v81;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v156, 0);
  if ( !v144 )
    goto LABEL_113;
  Item = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                    v144,
                    Item,
                    DispLimitCountFromUserServantCollection,
                    0,
                    1,
                    0);
  if ( !v79 )
    goto LABEL_113;
  v88 = (Il2CppObject *)Item;
  if ( Item )
  {
    Item = sub_2213BB4(Item, v79->obj.klass->_1.element_class);
    if ( !Item )
      goto LABEL_115;
  }
  if ( !LODWORD(v79->max_length) )
    goto LABEL_114;
  v79->m_Items[0] = v88;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v79->m_Items, (int32_t)v88, v82, v83, v84, v85, v86, v87);
  v90 = this->fields.baseUserCommandCodeEntity;
  if ( !v90 )
    goto LABEL_113;
  v91 = *(_OWORD *)&v90->fields.id.fields.fakeValue;
  *(_OWORD *)&v151.fields.currentCryptoKey = *(_OWORD *)&v90->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v151.fields.fakeValue = v91;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
  v145 = v151;
  v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v145, 0);
  v93 = System_Collections_Generic_Dictionary_long__long___get_Item(
          dic,
          v92,
          (const MethodInfo_3FCC660 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  Item = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(v144, v93, v72, 0, 1, 0);
  v100 = (Il2CppObject *)Item;
  if ( Item )
  {
    Item = sub_2213BB4(Item, v79->obj.klass->_1.element_class);
    if ( !Item )
      goto LABEL_115;
  }
  if ( (v79->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_114;
  v79->m_Items[1] = v100;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v79->m_Items[1], (int32_t)v100, v94, v95, v96, v97, v98, v99);
  Item = (__int64)ServantEntity__getClassName(v49, 0);
  v107 = (Il2CppObject *)Item;
  if ( Item )
  {
    Item = sub_2213BB4(Item, v79->obj.klass->_1.element_class);
    if ( !Item )
      goto LABEL_115;
  }
  if ( LODWORD(v79->max_length) <= 2 )
    goto LABEL_114;
  v79->m_Items[2] = v107;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v79->m_Items[2], (int32_t)v107, v101, v102, v103, v104, v105, v106);
  Item = (__int64)ServantEntity__getClassName(v63, 0);
  v114 = (Il2CppObject *)Item;
  if ( Item )
  {
    Item = sub_2213BB4(Item, v79->obj.klass->_1.element_class);
    if ( !Item )
      goto LABEL_115;
  }
  if ( (v79->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_114;
  v79->m_Items[3] = v114;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v79->m_Items[3], (int32_t)v114, v108, v109, v110, v111, v112, v113);
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v115);
  Item = (__int64)Rarity__getRarityType(rarityId, 0);
  v122 = (Il2CppObject *)Item;
  if ( Item )
  {
    Item = sub_2213BB4(Item, v79->obj.klass->_1.element_class);
    if ( !Item )
      goto LABEL_115;
  }
  if ( LODWORD(v79->max_length) <= 4 )
    goto LABEL_114;
  v79->m_Items[4] = v122;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v79->m_Items[4], (int32_t)v122, v116, v117, v118, v119, v120, v121);
  Item = (__int64)Rarity__getRarityType(v142, 0);
  v129 = (Il2CppObject *)Item;
  if ( Item )
  {
    Item = sub_2213BB4(Item, v79->obj.klass->_1.element_class);
    if ( !Item )
    {
LABEL_115:
      v138 = sub_2213D00(Item, v89);
      sub_2213BA0(v138, 0);
    }
  }
  if ( LODWORD(v79->max_length) <= 5 )
LABEL_114:
    sub_2213CE4(Item);
  v79->m_Items[5] = v129;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v79->m_Items[5], (int32_t)v129, v123, v124, v125, v126, v127, v128);
  v130 = System_String__Format_75698016(format, v79, 0);
  v132 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_WORD *)(v132 + 309) & 1) == 0 )
    v132 = sub_224B908(v131);
  v133 = *(_QWORD *)(*(_QWORD *)(v132 + 192) + 16LL);
  if ( (*(_WORD *)(v133 + 309) & 1) == 0 )
    v133 = sub_224B908(v131);
  v134 = **(CommonUI_o ***)(v133 + 184);
  v135 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
  v136 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
  v137 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v137,
    (Il2CppObject *)v7,
    Method_CommandCardEquipmentControl___c__DisplayClass94_0__OpenEquippedCommandCodeAttachDialog_b__1__,
    0);
  if ( !v134 )
    goto LABEL_113;
  CommonUI__OpenConfirmDecideDlg(v134, v143, v130, v135, v136, v137, 28, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0, 0);
}


void CommandCardEquipmentControl__OpenLockDialog(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  BattleCommandData_o *v4; // x0
  bool IsEnableCommandCode; // w20
  CommandCardDialog_o *v6; // x21
  CommandCardDialog_ClickDelegate_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  v2 = (Il2CppObject *)this;
  if ( (byte_5974A68 & 1) == 0 )
  {
    sub_2213A60(&CommandCardDialog_ClickDelegate_TypeInfo);
    this = (CommandCardEquipmentControl_o *)sub_2213A60(&Method_CommandCardEquipmentControl__OpenLockDialog_b__96_0__);
    byte_5974A68 = 1;
  }
  monitor = v2[36].monitor;
  if ( !monitor
    || ((v4 = (BattleCommandData_o *)*((_QWORD *)monitor + 48)) == 0
      ? (IsEnableCommandCode = 0)
      : (IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(v4, 0)),
        v6 = (CommandCardDialog_o *)v2[28].monitor,
        v7 = (CommandCardDialog_ClickDelegate_o *)sub_2213CCC(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(v7, v2, Method_CommandCardEquipmentControl__OpenLockDialog_b__96_0__, v8),
        !v6) )
  {
    sub_2213CDC(this, method);
  }
  CommandCardDialog__OpenLockEquipSlot(v6, IsEnableCommandCode, v7, v9);
}


void CommandCardEquipmentControl__OpenReturnDialog(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0
  CommandCardDialog_o *commandCardDialog; // x20
  UserServantEntity_o *baseUserServantEntity; // x21
  int32_t MarkIndex; // w22
  CommandCardDialog_ClickDelegate_o *v7; // x23
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_5974A69 & 1) == 0 )
  {
    sub_2213A60(&CommandCardDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_CommandCardEquipmentControl__OpenReturnDialog_b__97_0__);
    byte_5974A69 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0),
        v7 = (CommandCardDialog_ClickDelegate_o *)sub_2213CCC(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenReturnDialog_b__97_0__,
          v8),
        !commandCardDialog) )
  {
    sub_2213CDC(targetCommandCardData, method);
  }
  CommandCardDialog__OpenLockCommandCardResult(commandCardDialog, baseUserServantEntity, MarkIndex, v7, v9);
}


void CommandCardEquipmentControl__OpenUnlockDialog(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0
  CommandCardDialog_o *commandCardDialog; // x20
  UserServantEntity_o *baseUserServantEntity; // x21
  int32_t MarkIndex; // w22
  CommandCardDialog_ClickDelegate_o *v7; // x23
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_5974A67 & 1) == 0 )
  {
    sub_2213A60(&CommandCardDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_CommandCardEquipmentControl__OpenUnlockDialog_b__95_0__);
    byte_5974A67 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0),
        v7 = (CommandCardDialog_ClickDelegate_o *)sub_2213CCC(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenUnlockDialog_b__95_0__,
          v8),
        !commandCardDialog) )
  {
    sub_2213CDC(targetCommandCardData, method);
  }
  CommandCardDialog__OpenUnlockCommandCardEquipment(commandCardDialog, baseUserServantEntity, MarkIndex, v7, v9);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__PlayEquipEffect(
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  CommandCodeEffectComponent_o *v21; // x22
  const MethodInfo *v22; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_5974A7A & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974A7A = 1;
  }
  AttachEffectOnCode = (char *)CommandCardEquipmentControl__CreateAttachEffectOnCode(
                                 this,
                                 *(const MethodInfo **)&targetCardIdx);
  baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_13;
  v10 = (CommandCodeEffectComponent_o *)AttachEffectOnCode;
  v11 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v23.fields.currentCryptoKey = v11;
  *(_QWORD *)&v23.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
  AttachEffectOnCode = (char *)CommandCardEquipmentControl__CreateAttachEffectOnCard(this, targetCardIdx, v13, v14);
  if ( !AttachEffectOnCode )
    goto LABEL_13;
  v21 = (CommandCodeEffectComponent_o *)AttachEffectOnCode;
  if ( callback )
  {
    *((_QWORD *)AttachEffectOnCode + 27) = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(AttachEffectOnCode + 216),
      (int32_t)callback,
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
          0),
        (AttachEffectOnCode = (char *)this->fields.commandCardEquipmentIcon) == 0)
    || (CombineCommandCardEquipmentComponent__SetEquippedInfo(
          (CombineCommandCardEquipmentComponent_o *)AttachEffectOnCode,
          0,
          -1,
          0),
        !v10) )
  {
LABEL_13:
    sub_2213CDC(AttachEffectOnCode, v8);
  }
  CommandCodeEffectComponent__PlayAnimation(v10, v8);
  CommandCodeEffectComponent__PlayAnimation(v21, v22);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__PlayLockEffect(
        CommandCardEquipmentControl_o *this,
        int32_t lockCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *lockEffect; // x19
  CombineCommandCardComponent_o *Component_object; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Component_o *v16; // x19
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Transform_o *v19; // x20
  UnityEngine_Transform_o *v20; // x20
  const MethodInfo *v21; // x1

  if ( (byte_5974A79 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A79 = 1;
  }
  lockEffect = (Il2CppObject *)this->fields.lockEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&lockCardIdx);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                        lockEffect,
                                                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_20;
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)Component_object,
                                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_20;
  v16 = (UnityEngine_Component_o *)Component_object;
  if ( callback )
  {
    Component_object->fields.tr_criticaleffect = (struct UnityEngine_GameObject_o *)callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&Component_object->fields.tr_criticaleffect,
      (int32_t)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v16, 0);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_20;
  if ( LODWORD(commandCardList->max_length) <= lockCardIdx )
    sub_2213CE4(Component_object);
  v18 = (UnityEngine_Transform_o *)Component_object;
  Component_object = commandCardList->m_Items[lockCardIdx];
  if ( !Component_object )
    goto LABEL_20;
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)Component_object,
                                                        0);
  if ( !v18 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)Component_object, 0);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v16, 0);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE0 )
  {
    Component_object = (CombineCommandCardComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v19 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v16, 0);
  v20 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE5 )
  {
    Component_object = (CombineCommandCardComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v20 )
LABEL_20:
    sub_2213CDC(Component_object, v9);
  UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v16, v21);
}


void CommandCardEquipmentControl__PlayRemoveEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int64 v23; // x22
  __int64 v24; // x23
  int32_t v25; // w0
  const MethodInfo *v26; // x3
  CommandCodeEffectComponent_o *v27; // x0
  __int64 v28; // x1
  Il2CppObject *commandCodeDetachEffect; // x23
  CommandCodeEffectComponent_o *v30; // x22
  UnityEngine_GameObject_o *v31; // x23
  UnityEngine_Transform_o *v32; // x24
  UnityEngine_Transform_o *v33; // x24
  System_Action_o *v34; // x24
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Action_o *v41; // x24
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct CombineCommandCardComponent_array *commandCardList; // x8
  const MethodInfo *v49; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_5974A7B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_CommandCardEquipmentControl___c__DisplayClass126_0__PlayRemoveEffect_b__0__);
    sub_2213A60(&Method_CommandCardEquipmentControl___c__DisplayClass126_0__PlayRemoveEffect_b__1__);
    sub_2213A60(&CommandCardEquipmentControl___c__DisplayClass126_0_TypeInfo);
    byte_5974A7B = 1;
  }
  v7 = sub_2213CCC(CommandCardEquipmentControl___c__DisplayClass126_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_27;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  if ( !nowEquipedUserCommandCodeEntity )
    goto LABEL_27;
  v23 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v50.fields.currentCryptoKey = v23;
  *(_QWORD *)&v50.fields.fakeValue = v24;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v50, 0);
  v27 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(this, targetCardIdx, v25, v26);
  commandCodeDetachEffect = (Il2CppObject *)this->fields.commandCodeDetachEffect;
  v30 = v27;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeDetachEffect,
                                                   (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_27;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_27;
  v31 = Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0);
  if ( !Component_object )
    goto LABEL_27;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.detachEffectPos, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v31, 0);
  v32 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE0 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v32 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v32, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v31, 0);
  v33 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE5 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v33 )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v34 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v7,
    Method_CommandCardEquipmentControl___c__DisplayClass126_0__PlayRemoveEffect_b__0__,
    0);
  if ( v34 )
  {
    v31[9].monitor = v34;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31[9].monitor, (int32_t)v34, v35, v36, v37, v38, v39, v40);
  }
  v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v7,
    Method_CommandCardEquipmentControl___c__DisplayClass126_0__PlayRemoveEffect_b__1__,
    0);
  if ( v41 )
  {
    v31[9].klass = (UnityEngine_GameObject_c *)v41;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31[9], (int32_t)v41, v42, v43, v44, v45, v46, v47);
  }
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_27;
  if ( LODWORD(commandCardList->max_length) <= targetCardIdx )
    sub_2213CE4(Component_object);
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCardIdx];
  if ( !Component_object
    || (CombineCommandCardComponent__HideCommandCodeSprite((CombineCommandCardComponent_o *)Component_object, 0),
        CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v31, v49),
        !v30) )
  {
LABEL_27:
    sub_2213CDC(Component_object, v9);
  }
  CommandCodeEffectComponent__PlayAnimation(v30, v9);
}


System_Collections_IEnumerator_o *CommandCardEquipmentControl__PlayReplaceEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5974A7C & 1) == 0 )
  {
    sub_2213A60(&CommandCardEquipmentControl__PlayReplaceEffect_d__127_TypeInfo);
    byte_5974A7C = 1;
  }
  v7 = sub_2213CCC(CommandCardEquipmentControl__PlayReplaceEffect_d__127_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = targetCardIdx;
  *(_QWORD *)(v7 + 48) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *CommandCardEquipmentControl__PlaySelfAttachReplaceEffect(
        CommandCardEquipmentControl_o *this,
        int32_t removeCardIdx,
        int32_t attachCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5974A7D & 1) == 0 )
  {
    sub_2213A60(&CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_TypeInfo);
    byte_5974A7D = 1;
  }
  v9 = sub_2213CCC(CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 40) = removeCardIdx;
  *(_DWORD *)(v9 + 44) = attachCardIdx;
  *(_QWORD *)(v9 + 48) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__PlayUnlockEffect(
        CommandCardEquipmentControl_o *this,
        int32_t unlockCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *unlockEffect; // x21
  CombineCommandCardComponent_o *Component_object; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Component_o *v16; // x21
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Transform_o *v19; // x22
  UnityEngine_Transform_o *v20; // x22
  struct CombineCommandCardComponent_array *v21; // x8
  const MethodInfo *v22; // x1

  if ( (byte_5974A78 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A78 = 1;
  }
  unlockEffect = (Il2CppObject *)this->fields.unlockEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&unlockCardIdx);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                        unlockEffect,
                                                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)Component_object,
                                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_23;
  v16 = (UnityEngine_Component_o *)Component_object;
  if ( callback )
  {
    Component_object->fields.tr_criticaleffect = (struct UnityEngine_GameObject_o *)callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&Component_object->fields.tr_criticaleffect,
      (int32_t)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v16, 0);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_23;
  if ( LODWORD(commandCardList->max_length) <= unlockCardIdx )
    goto LABEL_24;
  v18 = (UnityEngine_Transform_o *)Component_object;
  Component_object = commandCardList->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)Component_object,
                                                        0);
  if ( !v18 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)Component_object, 0);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v16, 0);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE0 )
  {
    Component_object = (CombineCommandCardComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v19 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v16, 0);
  v20 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5969AE5 )
  {
    Component_object = (CombineCommandCardComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (v21 = this->fields.commandCardList) == 0) )
  {
LABEL_23:
    sub_2213CDC(Component_object, v9);
  }
  if ( LODWORD(v21->max_length) <= unlockCardIdx )
LABEL_24:
    sub_2213CE4(Component_object);
  Component_object = v21->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_23;
  CombineCommandCardComponent__HideUnlockInfo(Component_object, 0);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v16, v22);
}


void CommandCardEquipmentControl__SetBaseServantCommandCardList(
        CommandCardEquipmentControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *assetList; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Component_o *messageTxtLabelSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UnityEngine_Color_o *p_CondTitleLabelColor_k__BackingField; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  float *v26; // x11
  struct UnityEngine_Color_o *p_CondTitleSpriteColor_k__BackingField; // x8
  float *v28; // x10
  float *v29; // x9
  struct System_String_array *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  unsigned __int64 v37; // x20
  __int64 v38; // x27
  struct System_String_array *v39; // x28
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v41; // w21
  __int64 v42; // x22
  __int64 v43; // x23
  __int64 v44; // x1
  int32_t v45; // w22
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_array *v52; // x20
  System_Action_o *v53; // x21
  __int64 v54; // x1
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974A5D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_CommandCardEquipmentControl_SetCommandCardList__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    byte_5974A5D = 1;
  }
  assetList = this->fields.assetList;
  transformInfo = 0;
  if ( assetList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, callback);
    AssetManager__releaseAssetStorage_47506132(assetList, 0);
    this->fields.assetList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetList, 0, v6, v7, v8, v9, v10, v11);
  }
  CommandCardEquipmentControl__InitTransformInfo(this, (const MethodInfo *)callback);
  messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.messageTxtLabelSprite;
  if ( !messageTxtLabelSprite )
    goto LABEL_47;
  gameObject = UnityEngine_Component__get_gameObject(messageTxtLabelSprite, 0);
  messageTxtLabelSprite = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0);
  if ( !messageTxtLabelSprite )
    goto LABEL_47;
  messageTxtLabelSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageTxtLabelSprite, 0);
  if ( !messageTxtLabelSprite )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageTxtLabelSprite, 1, 0);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  if ( this->fields.baseUserServantEntity )
  {
    this->fields.LoadAfterCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.LoadAfterCallback,
      (int32_t)callback,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( this->fields._IsTransformServant_k__BackingField )
    {
      messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.cardSwitchButton;
      if ( !messageTxtLabelSprite )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageTxtLabelSprite, 1, 0);
      messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.transformSvtName;
      if ( !messageTxtLabelSprite )
        goto LABEL_47;
      messageTxtLabelSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageTxtLabelSprite, 0);
      if ( !messageTxtLabelSprite )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageTxtLabelSprite, 1, 0);
      messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
      if ( !messageTxtLabelSprite )
        goto LABEL_47;
      messageTxtLabelSprite = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantInfo(
                                                           (UserServantEntity_o *)messageTxtLabelSprite,
                                                           &transformInfo,
                                                           this->fields.displayTransformIndex,
                                                           0);
      if ( !transformInfo )
        goto LABEL_47;
      messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.transformSvtName;
      if ( !messageTxtLabelSprite )
        goto LABEL_47;
      UILabel__set_text((UILabel_o *)messageTxtLabelSprite, transformInfo->fields.titleText, 0);
      messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.transformSvtName;
      if ( this->fields._IsSaveTransformServant_k__BackingField )
      {
        if ( this->fields.displayTransformIndex <= 0 )
        {
          p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColor_k__BackingField;
          p_g = &this->fields._CondTitleLabelColor_k__BackingField.fields.g;
          p_b = &this->fields._CondTitleLabelColor_k__BackingField.fields.b;
          p_a = &this->fields._CondTitleLabelColor_k__BackingField.fields.a;
          if ( !messageTxtLabelSprite )
            goto LABEL_47;
        }
        else
        {
          p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColorAfter_k__BackingField;
          p_g = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.g;
          p_b = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.b;
          p_a = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.a;
          if ( !messageTxtLabelSprite )
            goto LABEL_47;
        }
        v57.fields.a = *p_a;
        v57.fields.b = *p_b;
        v57.fields.g = *p_g;
        v57.fields.r = p_CondTitleLabelColor_k__BackingField->fields.r;
        UIWidget__set_color((UIWidget_o *)messageTxtLabelSprite, v57, 0);
        messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.transformBgSprite;
        if ( this->fields.displayTransformIndex <= 0 )
        {
          p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
          v29 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
          v28 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
          v26 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
          if ( !messageTxtLabelSprite )
            goto LABEL_47;
        }
        else
        {
          p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColorAfter_k__BackingField;
          v29 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g;
          v28 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.b;
          v26 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.a;
          if ( !messageTxtLabelSprite )
            goto LABEL_47;
        }
      }
      else
      {
        if ( !messageTxtLabelSprite )
          goto LABEL_47;
        UIWidget__set_color((UIWidget_o *)messageTxtLabelSprite, this->fields._CondTitleLabelColor_k__BackingField, 0);
        messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.transformBgSprite;
        if ( !messageTxtLabelSprite )
          goto LABEL_47;
        v26 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
        p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
        v28 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
        v29 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
      }
      v58.fields.a = *v26;
      v58.fields.b = *v28;
      v58.fields.g = *v29;
      v58.fields.r = p_CondTitleSpriteColor_k__BackingField->fields.r;
      UIWidget__set_color((UIWidget_o *)messageTxtLabelSprite, v58, 0);
    }
    v30 = (struct System_String_array *)sub_2213B20(string___TypeInfo, (unsigned int)this->fields.transformTotal);
    this->fields.assetList = v30;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetList, (int32_t)v30, v31, v32, v33, v34, v35, v36);
    if ( this->fields.transformTotal >= 1 )
    {
      v37 = 0;
      v38 = 32;
      while ( 1 )
      {
        messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
        if ( !messageTxtLabelSprite )
          break;
        v39 = this->fields.assetList;
        messageTxtLabelSprite = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantId(
                                                             (UserServantEntity_o *)messageTxtLabelSprite,
                                                             v37,
                                                             0);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v41 = (int)messageTxtLabelSprite;
        v42 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v43 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
        *(_QWORD *)&v56.fields.currentCryptoKey = v42;
        *(_QWORD *)&v56.fields.fakeValue = v43;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v56, 0);
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v44);
        messageTxtLabelSprite = (UnityEngine_Component_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                             v41,
                                                             v45,
                                                             0);
        if ( !v39 )
          break;
        if ( v37 >= LODWORD(v39->max_length) )
          sub_2213CE4(messageTxtLabelSprite);
        *(Il2CppClass **)((char *)&v39->obj.klass + v38) = (Il2CppClass *)messageTxtLabelSprite;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)((char *)v39 + v38),
          (int32_t)messageTxtLabelSprite,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        ++v37;
        v38 += 8;
        if ( (__int64)v37 >= this->fields.transformTotal )
          goto LABEL_44;
      }
LABEL_47:
      sub_2213CDC(messageTxtLabelSprite, v12);
    }
LABEL_44:
    v52 = this->fields.assetList;
    v53 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v53, (Il2CppObject *)this, Method_CommandCardEquipmentControl_SetCommandCardList__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v54);
    AssetManager__loadAssetStorage_47503780(v52, v53, 1, 0);
  }
  else
  {
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, v15);
    if ( !callback )
      goto LABEL_47;
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
}


void CommandCardEquipmentControl__SetBaseSvtCardImg(
        CommandCardEquipmentControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2
  struct UICharaGraphTexture_o *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  this->fields.baseUserServantEntity = userServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)userServantEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  CommandCardEquipmentControl__MoidfyUserSvtCommandCode(this, userServantEntity, v10);
  v11 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(CommandCardEquipmentControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                          this,
                                          this->fields.charaGraph,
                                          userServantEntity,
                                          this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, (int32_t)v11, v12, v13, v14, v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__SetCommandCardDisplay(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CombineCommandCardComponent_array *commandCardList; // x8
  const MethodInfo *v11; // x2
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
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
    if ( SLODWORD(commandCardList->max_length) > index )
    {
      this->fields.baseUserCommandCodeEntity = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserCommandCodeEntity,
        0,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      CommandCardEquipmentControl__SetTargetIndexSelectSprite(this, index, v11);
      v18 = this->fields.commandCardList;
      if ( v18 )
      {
        if ( LODWORD(v18->max_length) <= index )
          sub_2213CE4(this);
        v19 = v18->m_Items[index];
        this->fields.targetCommandCardData = v19;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.targetCommandCardData,
          (int32_t)v19,
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
      sub_2213CDC(this, *(_QWORD *)&index);
    }
  }
}


void CommandCardEquipmentControl__SetCommandCardEquipmentSkill(
        CommandCardEquipmentControl_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  CommandCardEquipmentControl_o *v3; // x19
  CommandCardEquipmentControl_o *v4; // x20
  System_String_array *explanationList; // [xsp+0h] [xbp-30h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-28h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-18h] BYREF

  explanationList = 0;
  titleList = 0;
  if ( !userCommandCode )
    goto LABEL_9;
  v3 = this;
  UserCommandCodeEntity__GetSkillInfo(userCommandCode, &idList, &titleList, &explanationList, 0);
  this = (CommandCardEquipmentControl_o *)SkillInfo__GetMargeExplanation_50621816(explanationList, 0);
  if ( !idList )
    goto LABEL_9;
  if ( !LODWORD(idList->max_length) )
    goto LABEL_10;
  v4 = this;
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillIcon;
  if ( !this || (SkillIconComponent__Set_48067596((SkillIconComponent_o *)this, idList->m_Items[0], 1, 0), !titleList) )
LABEL_9:
    sub_2213CDC(this, userCommandCode);
  if ( !LODWORD(titleList->max_length) )
LABEL_10:
    sub_2213CE4(this);
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillName;
  if ( !this )
    goto LABEL_9;
  UILabel__set_text((UILabel_o *)this, titleList->m_Items[0], 0);
  WrapControlText__textBBCodeAdjust(v3->fields.commandCardEquipmentSkillDetail, (System_String_o *)v4, 22, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__SetCommandCardList(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  __int64 baseUserServantEntity; // x0
  UserServantEntity_o *v4; // x21
  int32_t v5; // w20
  int32_t displayTransformIndex; // w1
  int32_t CommandCardLimitCountStageSealAfter; // w0
  __int64 v8; // x1
  int32_t v9; // w21
  Il2CppObject *v10; // x22
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v12; // x24
  struct UserServantEntity_o *v13; // x9
  __int64 v14; // x26
  __int64 v15; // x27
  int64_t v16; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  float v18; // s1 OVERLAPPED
  float v19; // s0
  int v20; // s2
  float v21; // s0
  __int64 (*v22)(void); // x9
  struct CombineCommandCardComponent_array *commandCardList; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v25; // x29
  __int64 v26; // x28
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  int32_t v29; // w26
  struct CombineCommandCardComponent_array *v30; // x8
  CombineCommandCardComponent_o *v31; // x24
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  BattleCommandData_o *v38; // x25
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  Il2CppObject *v41; // x23
  __int64 v42; // x21
  __int64 v43; // x26
  struct System_Int64_array *v44; // x8
  int64_t v45; // x2
  struct System_Int32_array *commandCardParam; // x8
  int32_t v47; // w3
  const MethodInfo *v48; // x2
  bool v49; // zf
  float v50; // s3 OVERLAPPED
  float v51; // s0
  float v52; // s1
  float v53; // s2
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct System_Action_o *LoadAfterCallback; // x20
  int32_t limitCount; // [xsp+4h] [xbp-7Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_5974A5E & 1) == 0 )
  {
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974A5E = 1;
  }
  baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
  entity = 0;
  if ( !baseUserServantEntity )
    goto LABEL_69;
  baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                            (UserServantEntity_o *)baseUserServantEntity,
                            this->fields.displayTransformIndex,
                            0);
  v4 = this->fields.baseUserServantEntity;
  if ( !v4 )
    goto LABEL_69;
  v5 = baseUserServantEntity;
  if ( UserServantEntity__get_IsSaveTransformServant(this->fields.baseUserServantEntity, 0) )
    displayTransformIndex = this->fields.displayTransformIndex;
  else
    displayTransformIndex = -1;
  CommandCardLimitCountStageSealAfter = UserServantEntity__GetCommandCardLimitCountStageSealAfter(
                                          v4,
                                          displayTransformIndex,
                                          0,
                                          0);
  v9 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(CommandCardLimitCountStageSealAfter, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v8);
  limitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v9, 0);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_69;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_69;
  v10 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
          v5,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseUserServantEntity,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_69;
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)baseUserServantEntity,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  baseUserServantEntity = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    baseUserServantEntity = (__int64)NetworkManager_TypeInfo;
  }
  v13 = this->fields.baseUserServantEntity;
  if ( !v13 )
    goto LABEL_69;
  v14 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  v16 = *(_QWORD *)(*(_QWORD *)(baseUserServantEntity + 184) + 64LL);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v63.fields.currentCryptoKey = v14;
  *(_QWORD *)&v63.fields.fakeValue = v15;
  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v63, 0);
  if ( !v12 )
    goto LABEL_69;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)v12,
    &entity,
    v16,
    (int)baseUserServantEntity,
    0);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_69;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0);
  v18 = -15.5;
  if ( this->fields._IsTransformServant_k__BackingField )
  {
    v18 = -18.0;
    v19 = -270.0;
  }
  else
  {
    v19 = -258.0;
  }
  v20 = 0;
  GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)(&v18 - 1), 0);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_69;
  v21 = 135.0;
  if ( !this->fields._IsTransformServant_k__BackingField )
    v21 = 130.0;
  v22 = *(__int64 (**)(void))(*(_QWORD *)baseUserServantEntity + 440LL);
  *(float *)(baseUserServantEntity + 48) = v21;
  baseUserServantEntity = v22();
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_69;
  max_length = commandCardList->max_length;
  if ( (int)max_length >= 1 )
  {
    if ( v10 )
    {
      v25 = 0;
      v26 = (unsigned int)max_length;
      while ( 1 )
      {
        klass = v10[9].klass;
        if ( klass )
        {
          namespaze_low = LODWORD(klass->_1.namespaze);
          if ( (__int64)v25 < (int)namespaze_low )
          {
            if ( v25 >= namespaze_low )
              goto LABEL_70;
            v29 = *((_DWORD *)&klass->_1.byval_arg.data + v25);
            if ( (unsigned int)(v29 - 1) <= 2 )
            {
              v30 = this->fields.commandCardList;
              if ( !v30 )
                break;
              if ( v25 >= LODWORD(v30->max_length) )
                goto LABEL_70;
              v31 = v30->m_Items[v25];
              baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( !v31 )
                break;
              v31->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v31->fields.target,
                baseUserServantEntity,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37);
              v38 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
              BattleCommandData___ctor_53637188(v38, v29, v5, limitCount, 0, -1, 0);
              if ( !v38 )
                break;
              baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
              v38->fields.markindex = v25;
              v38->fields.servantCardIdsIndex = v25;
              if ( baseUserServantCommandCodeEntity )
              {
                userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !userCommandCodeIds )
                  break;
                if ( v25 >= LODWORD(userCommandCodeIds->max_length) )
LABEL_70:
                  sub_2213CE4(baseUserServantEntity);
                method = (const MethodInfo *)userCommandCodeIds->m_Items[v25];
                v38->fields.userCommandCodeId = (int64_t)method;
                if ( (__int64)method >= 1 )
                {
                  if ( !MasterData_object )
                    break;
                  v41 = MasterData_object;
                  baseUserServantEntity = (__int64)DataMasterBase_object__object__long___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                     (int64_t)method,
                                                     (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
                  if ( !baseUserServantEntity )
                    break;
                  v43 = *(_QWORD *)(baseUserServantEntity + 80);
                  v42 = *(_QWORD *)(baseUserServantEntity + 88);
                  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
                  *(_QWORD *)&v64.fields.currentCryptoKey = v43;
                  *(_QWORD *)&v64.fields.fakeValue = v42;
                  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v64, 0);
                  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
                  MasterData_object = v41;
                  v38->fields.commandCodeId = baseUserServantEntity;
                  if ( !baseUserServantCommandCodeEntity )
                    break;
                }
                v44 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !v44 )
                  break;
                if ( v25 >= LODWORD(v44->max_length) )
                  goto LABEL_70;
                v45 = v44->m_Items[v25];
              }
              else
              {
                v45 = -1;
              }
              if ( entity && (commandCardParam = entity->fields.commandCardParam) != 0 )
              {
                if ( v25 >= LODWORD(commandCardParam->max_length) )
                  goto LABEL_70;
                v47 = commandCardParam->m_Items[v25];
              }
              else
              {
                v47 = 0;
              }
              v38->fields.commandCardParam = v47;
              CombineCommandCardComponent__DispCommandCard(v31, v38, v45, v47, 0, 0, 0);
              v49 = !CommandCardEquipmentControl__IsTransformedServant(this, this->fields.displayTransformIndex, v48);
              v50 = 1.0;
              if ( v49 )
                v51 = 1.0;
              else
                v51 = 0.5;
              v52 = v51;
              v53 = v51;
              CombineCommandCardComponent__SetColor(v31, *(UnityEngine_Color_o *)(&v50 - 3), 0);
              CombineCommandCardComponent__SetLayout(v31, this->fields.positionOffsetY, this->fields.scaleOffset, 0);
            }
          }
        }
        if ( v26 == ++v25 )
          goto LABEL_66;
      }
    }
LABEL_69:
    sub_2213CDC(baseUserServantEntity, method);
  }
LABEL_66:
  CommandCardEquipmentControl__SetExecuteButtonState(this, method);
  LoadAfterCallback = this->fields.LoadAfterCallback;
  if ( LoadAfterCallback )
  {
    this->fields.LoadAfterCallback = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.LoadAfterCallback, 0, v54, v55, v56, v57, v58, v59);
    ((void (__fastcall *)(intptr_t, intptr_t))LoadAfterCallback->fields.invoke_impl)(
      LoadAfterCallback->fields.method_code,
      LoadAfterCallback->fields.method);
  }
}


void CommandCardEquipmentControl__SetEffectAfterInfo(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *qpInfoObj; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  CommandCardEquipmentControl__InitCommandCodeInfo(this, method);
  qpInfoObj = this->fields.qpInfoObj;
  if ( !qpInfoObj
    || (UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0),
        (qpInfoObj = (UnityEngine_GameObject_o *)this->fields.lockButton) == 0)
    || (qpInfoObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)qpInfoObj, 0)) == 0 )
  {
    sub_2213CDC(qpInfoObj, v3);
  }
  UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0);
  CommandCardEquipmentControl__InitCommandCardSelectStatus(this, v5);
  CommandCardEquipmentControl__InitDisplayInfo(this, v6);
  CommandCardEquipmentControl__UpdateItemLinkListWindowButton(this, v7);
}


void CommandCardEquipmentControl__SetExecuteButtonState(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  struct UICommonButton_o *executeButton; // x0
  __int64 v5; // x1
  struct CombineCommandCardComponent_o *v6; // x20
  bool v7; // zf
  struct CombineCommandCardComponent_o *v8; // x9
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  struct BattleCommandData_o *data; // x9
  __int128 v11; // q1
  int64_t userCommandCodeId; // x20
  _BOOL4 v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  if ( (byte_5974A73 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A73 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(targetCommandCardData, 0, 0);
  v6 = this->fields.targetCommandCardData;
  if ( ((unsigned __int8)executeButton & 1) == 0 )
    goto LABEL_31;
  if ( !v6 )
    goto LABEL_28;
  if ( v6->fields._NowKind_k__BackingField == 1 )
  {
    v7 = this->fields.baseUserCommandCodeEntity == 0;
  }
  else
  {
LABEL_31:
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
    if ( ((unsigned __int8)executeButton & 1) == 0 )
      goto LABEL_19;
    v8 = this->fields.targetCommandCardData;
    if ( !v8 )
      goto LABEL_28;
    if ( v8->fields._NowKind_k__BackingField == 2 )
    {
      baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
      if ( !baseUserCommandCodeEntity )
      {
        v13 = 0;
        goto LABEL_23;
      }
      data = v8->fields.data;
      if ( !data )
        goto LABEL_28;
      v11 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
      userCommandCodeId = data->fields.userCommandCodeId;
      *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v15.fields.fakeValue = v11;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
      v14 = v15;
      v7 = userCommandCodeId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v14, 0);
    }
    else
    {
LABEL_19:
      v7 = !this->fields.isCanCombine;
    }
  }
  v13 = !v7;
LABEL_23:
  executeButton = this->fields.executeButton;
  if ( !executeButton
    || (((void (__fastcall *)(struct UICommonButton_o *, _BOOL4, const MethodInfo *))executeButton->klass->vtable._5_set_isEnabled.methodPtr)(
          executeButton,
          v13,
          executeButton->klass->vtable._5_set_isEnabled.method),
        (executeButton = this->fields.executeButton) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)executeButton, v13, 0),
        (executeButton = this->fields.executeButton) == 0) )
  {
LABEL_28:
    sub_2213CDC(executeButton, v5);
  }
  executeButton->klass->vtable._14_SetState.methodPtr();
}


void CommandCardEquipmentControl__SetHaveQpInfo(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLabel; // x20
  System_String_o *v6; // x1

  if ( (byte_5974A72 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_5974A72 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLabel = this->fields.haveQpLabel,
        v6 = (System_String_o *)StringLiteral_9617/*"N0"*/,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_77143864((int64_t)&this->fields.haveQpVal, v6, 0),
        !haveQpLabel) )
  {
    sub_2213CDC(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLabel, (System_String_o *)SelfUserGame, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__SetRemoveButttonState(
        CommandCardEquipmentControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *removeButton; // x0

  removeButton = (UnityEngine_Behaviour_o *)this->fields.removeButton;
  if ( !removeButton
    || (((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, const char *))removeButton->klass[1]._1.name)(
          removeButton,
          isEnable,
          removeButton->klass[1]._1.namespaze),
        (removeButton = (UnityEngine_Behaviour_o *)this->fields.removeButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(removeButton, isEnable, 0),
        (removeButton = (UnityEngine_Behaviour_o *)this->fields.removeButton) == 0) )
  {
    sub_2213CDC(removeButton, isEnable);
  }
  ((void (*)(void))removeButton->klass[1]._1.nestedTypes)();
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__SetReplaceButtonState(
        CommandCardEquipmentControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *replaceButton; // x0

  replaceButton = (UnityEngine_Behaviour_o *)this->fields.replaceButton;
  if ( !replaceButton
    || (((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, const char *))replaceButton->klass[1]._1.name)(
          replaceButton,
          isEnable,
          replaceButton->klass[1]._1.namespaze),
        (replaceButton = (UnityEngine_Behaviour_o *)this->fields.replaceButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(replaceButton, isEnable, 0),
        (replaceButton = (UnityEngine_Behaviour_o *)this->fields.replaceButton) == 0) )
  {
    sub_2213CDC(replaceButton, isEnable);
  }
  ((void (*)(void))replaceButton->klass[1]._1.nestedTypes)();
}


void CommandCardEquipmentControl__SetReplaceDispInfo(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *overwriteWarningLabel; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  overwriteWarningLabel = (UnityEngine_Component_o *)this->fields.overwriteWarningLabel;
  if ( !overwriteWarningLabel
    || (overwriteWarningLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             overwriteWarningLabel,
                                                             0)) == 0 )
  {
    sub_2213CDC(overwriteWarningLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overwriteWarningLabel, 0, 0);
  CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v4);
  CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v5);
  CommandCardEquipmentControl__SetExecuteButtonState(this, v6);
}


void CommandCardEquipmentControl__SetSelectedCommandCodeInfo(
        CommandCardEquipmentControl_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        bool dispEquippedInfo,
        int32_t equippedSvtId,
        const MethodInfo *method)
{
  int64_t commandCardInfoObj; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  BattleCommandData_o *data; // x0
  _BOOL4 v18; // w26
  struct CombineCommandCardComponent_o *v19; // x8
  struct BattleCommandData_o *v20; // x8
  __int128 v21; // q1
  int64_t userCommandCodeId; // x23
  int v23; // w9
  struct CombineCommandCardComponent_o *v24; // x8
  struct BattleCommandData_o *v25; // x8
  __int128 v26; // q1
  int64_t v27; // x22
  int v28; // w9
  struct CombineCommandCardComponent_o *v29; // x8
  int v30; // w8
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w8
  int v34; // w27
  __int64 v35; // x29
  struct UserServantCommandCodeEntity_o *v36; // x8
  struct System_Int64_array *v37; // x8
  __int64 v38; // x23
  __int64 v39; // x24
  int64_t v40; // x25
  char v41; // w23
  int32_t v43; // w24
  struct UserServantCommandCodeEntity_o *v44; // x8
  __int128 v45; // q0
  __int128 v46; // q1
  int v47; // w8
  const MethodInfo *v48; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_5974A62 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A62 = 1;
  }
  commandCardInfoObj = (int64_t)this->fields.commandCardInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0);
  commandCardInfoObj = (int64_t)this->fields.unlockItemInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 0, 0);
  commandCardInfoObj = (int64_t)this->fields.commandCardNotEquippedInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 0, 0);
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentIcon;
  if ( !commandCardInfoObj )
    goto LABEL_61;
  commandCardInfoObj = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)commandCardInfoObj, 0);
  if ( !commandCardInfoObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0);
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentSkillIcon;
  if ( !commandCardInfoObj )
    goto LABEL_61;
  commandCardInfoObj = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)commandCardInfoObj, 0);
  if ( !commandCardInfoObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0);
  commandCardInfoObj = (int64_t)this->fields.qpInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 0, 0);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    goto LABEL_61;
  data = targetCommandCardData->fields.data;
  if ( data )
  {
    commandCardInfoObj = BattleCommandData__IsEnableCommandCode(data, 0);
    v18 = 0;
    if ( userCommandCode && (commandCardInfoObj & 1) != 0 )
    {
      v19 = this->fields.targetCommandCardData;
      if ( !v19 )
        goto LABEL_61;
      v20 = v19->fields.data;
      if ( !v20 )
        goto LABEL_61;
      v21 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      userCommandCodeId = v20->fields.userCommandCodeId;
      v23 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v52.fields.fakeValue = v21;
      if ( !v23 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userCommandCode);
      v51 = v52;
      commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v51, 0);
      v18 = userCommandCodeId != commandCardInfoObj;
      if ( dispEquippedInfo )
      {
        v24 = this->fields.targetCommandCardData;
        if ( !v24 )
          goto LABEL_61;
        v25 = v24->fields.data;
        if ( !v25 )
          goto LABEL_61;
        v26 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
        v27 = v25->fields.userCommandCodeId;
        v28 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v52.fields.fakeValue = v26;
        if ( !v28 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userCommandCode);
        v50 = v52;
        dispEquippedInfo = v27 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v50, 0);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserCommandCodeEntity,
    (int32_t)userCommandCode,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v29 = this->fields.targetCommandCardData;
  if ( !v29 )
    goto LABEL_61;
  v30 = v29->fields._NowKind_k__BackingField != 2 || v18;
  if ( v30 == 1 )
  {
    if ( userCommandCode )
    {
      baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
      if ( baseUserServantCommandCodeEntity )
      {
        userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
        if ( !userCommandCodeIds )
          goto LABEL_61;
        max_length = userCommandCodeIds->max_length;
        v34 = max_length - 1;
        if ( max_length >= 1 )
        {
          v35 = 0;
          while ( 1 )
          {
            v36 = this->fields.baseUserServantCommandCodeEntity;
            if ( !v36 )
              goto LABEL_61;
            v37 = v36->fields.userCommandCodeIds;
            if ( !v37 )
              goto LABEL_61;
            if ( (unsigned int)v35 >= LODWORD(v37->max_length) )
              sub_2213CE4(commandCardInfoObj);
            v38 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.currentCryptoKey;
            v39 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.fakeValue;
            v40 = v37->m_Items[v35];
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCode);
            *(_QWORD *)&v53.fields.currentCryptoKey = v38;
            *(_QWORD *)&v53.fields.fakeValue = v39;
            commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v53, 0);
            LODWORD(baseUserServantCommandCodeEntity) = 1;
            v41 = v40 == (int)commandCardInfoObj;
            if ( v40 != (int)commandCardInfoObj && v34 != (_DWORD)v35++ )
              continue;
            goto LABEL_50;
          }
        }
        v41 = 0;
        LODWORD(baseUserServantCommandCodeEntity) = 1;
      }
      else
      {
        v41 = 0;
      }
    }
    else
    {
      v41 = 0;
      LODWORD(baseUserServantCommandCodeEntity) = 0;
    }
  }
  else
  {
    LODWORD(baseUserServantCommandCodeEntity) = 0;
    v41 = 1;
  }
LABEL_50:
  v43 = equippedSvtId;
  if ( (unsigned int)baseUserServantCommandCodeEntity | v18 )
  {
    CommandCardEquipmentControl__SetReplaceDispInfo(this, (const MethodInfo *)userCommandCode);
    commandCardInfoObj = (int64_t)this->fields.cancelButton;
    if ( !commandCardInfoObj )
      goto LABEL_61;
    commandCardInfoObj = (int64_t)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)commandCardInfoObj,
                                    0);
    if ( !commandCardInfoObj )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0);
  }
  v44 = this->fields.baseUserServantCommandCodeEntity;
  if ( v44 )
  {
    v45 = *(_OWORD *)&v44->fields.svtId.fields.currentCryptoKey;
    v46 = *(_OWORD *)&v44->fields.svtId.fields.fakeValue;
    v47 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v52.fields.currentCryptoKey = v45;
    *(_OWORD *)&v52.fields.fakeValue = v46;
    if ( !v47 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userCommandCode);
    v49 = v52;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v49, 0) == equippedSvtId )
      v43 = -1;
  }
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentIcon;
  if ( !commandCardInfoObj )
LABEL_61:
    sub_2213CDC(commandCardInfoObj, userCommandCode);
  CombineCommandCardEquipmentComponent__SetIcon(
    (CombineCommandCardEquipmentComponent_o *)commandCardInfoObj,
    userCommandCode,
    v41,
    dispEquippedInfo,
    v43,
    0);
  CommandCardEquipmentControl__SetCommandCardEquipmentSkill(this, userCommandCode, v48);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__SetStateInfoMsg(
        CommandCardEquipmentControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseSelectInfoLabel; // x0
  UIWidget_o *detailLabel; // x20
  System_String_o *v7; // x20
  UnityEngine_Object_o *targetCommandCardData; // x21
  struct CombineCommandCardComponent_o *v9; // x8
  int32_t NowKind_k__BackingField; // w8
  LocalizationManager_c *v11; // x0
  __int64 *v12; // x20
  UISprite_o *v13; // x21
  System_String_o *NOT_EQUIP_EXE_BTN_SPRITE_NAME; // x1
  UISprite_o *v15; // x21
  __int64 *v16; // x8
  UISprite_o *v17; // x21
  UILabel_o *v18; // x21
  struct CombineCommandCardComponent_o *v19; // x8
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int128 v21; // q1
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v23; // q1
  bool v24; // zf
  __int64 v25; // x1
  int v26; // w8
  UISprite_o *executeButtonSprite; // x21
  System_String_o *REPLACE_EXE_BTN_SPRITE_NAME; // x1
  UISprite_o *v29; // x21
  UISprite_o *messageTxtLabelSprite; // x21
  int v31; // w8
  UISprite_o *v32; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-50h]
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974A74 & 1) == 0 )
  {
    sub_2213A60(&CommandCardEquipmentControl_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&StringLiteral_3717/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/);
    sub_2213A60(&StringLiteral_3714/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/);
    sub_2213A60(&StringLiteral_3715/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/);
    sub_2213A60(&StringLiteral_3721/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/);
    sub_2213A60(&StringLiteral_3719/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/);
    sub_2213A60(&StringLiteral_3718/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/);
    sub_2213A60(&StringLiteral_12705/*"SHORT_ITEM_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_3723/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/);
    sub_2213A60(&StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_3720/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974A74 = 1;
  }
  baseSelectInfoLabel = (UnityEngine_Component_o *)CommandCardEquipmentControl_TypeInfo;
  detailLabel = (UIWidget_o *)this->fields.detailLabel;
  if ( !*(&CommandCardEquipmentControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
  if ( !detailLabel )
    goto LABEL_113;
  UIWidget__set_color(detailLabel, CommandCardEquipmentControl_TypeInfo->static_fields->defaultDetailColor, 0);
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( state <= 1 )
  {
    if ( state )
    {
      if ( state != 1 )
        goto LABEL_109;
      targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&state);
      if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0, 0) )
        goto LABEL_109;
      baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.baseSelectInfoLabel;
      if ( !baseSelectInfoLabel )
        goto LABEL_113;
      baseSelectInfoLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSelectInfoLabel, 0);
      if ( !baseSelectInfoLabel )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSelectInfoLabel, 0, 0);
      v9 = this->fields.targetCommandCardData;
      if ( !v9 )
        goto LABEL_113;
      NowKind_k__BackingField = v9->fields._NowKind_k__BackingField;
      if ( NowKind_k__BackingField == 2 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
        baseSelectInfoLabel = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3720/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
                                                           0);
        messageTxtLabelSprite = this->fields.messageTxtLabelSprite;
        v7 = (System_String_o *)baseSelectInfoLabel;
        if ( !*(&CommandCardEquipmentControl_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
        if ( messageTxtLabelSprite )
        {
          UISprite__set_spriteName(
            messageTxtLabelSprite,
            CommandCardEquipmentControl_TypeInfo->static_fields->EQUIPED_MESSAGE_SPRITE_NAME,
            0);
          baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.messageTxtLabelSprite;
          if ( baseSelectInfoLabel )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, void *))baseSelectInfoLabel->klass[2]._1.parent)(
              baseSelectInfoLabel,
              baseSelectInfoLabel->klass[2]._1.generic_class);
            baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.executeButtonSprite;
            if ( baseSelectInfoLabel )
            {
              NOT_EQUIP_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->NOT_EQUIP_EXE_BTN_SPRITE_NAME;
              goto LABEL_106;
            }
          }
        }
LABEL_113:
        sub_2213CDC(baseSelectInfoLabel, *(_QWORD *)&state);
      }
      if ( NowKind_k__BackingField )
      {
        v31 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( this->fields.baseUserCommandCodeEntity )
        {
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
          v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3719/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, 0);
          goto LABEL_109;
        }
        if ( !v31 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
        baseSelectInfoLabel = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3721/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/,
                                                           0);
        v32 = this->fields.messageTxtLabelSprite;
        v7 = (System_String_o *)baseSelectInfoLabel;
        if ( !*(&CommandCardEquipmentControl_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
        if ( v32 )
        {
          UISprite__set_spriteName(
            v32,
            CommandCardEquipmentControl_TypeInfo->static_fields->NOT_EQUIPED_MESSAGE_SPRITE_NAME,
            0);
          baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.messageTxtLabelSprite;
          if ( baseSelectInfoLabel )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, void *))baseSelectInfoLabel->klass[2]._1.parent)(
              baseSelectInfoLabel,
              baseSelectInfoLabel->klass[2]._1.generic_class);
            baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.executeButtonSprite;
            if ( baseSelectInfoLabel )
            {
              NOT_EQUIP_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
              goto LABEL_106;
            }
          }
        }
        goto LABEL_113;
      }
      if ( this->fields.isShortQp )
      {
        baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.detailLabel;
        if ( !baseSelectInfoLabel )
          goto LABEL_113;
        v36.fields.r = 1.0;
        v36.fields.g = 1.0;
        v36.fields.b = 1.0;
        v36.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)baseSelectInfoLabel, v36, 0);
        v11 = LocalizationManager_TypeInfo;
        v12 = &StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_20;
      }
      else if ( this->fields.isShortNeedItem )
      {
        baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.detailLabel;
        if ( !baseSelectInfoLabel )
          goto LABEL_113;
        v37.fields.r = 1.0;
        v37.fields.g = 1.0;
        v37.fields.b = 1.0;
        v37.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)baseSelectInfoLabel, v37, 0);
        v11 = LocalizationManager_TypeInfo;
        v12 = &StringLiteral_12705/*"SHORT_ITEM_INFO_MSG"*/;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_20;
      }
      else
      {
        v11 = LocalizationManager_TypeInfo;
        v12 = &StringLiteral_3723/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_20:
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&state);
      }
      baseSelectInfoLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v12, 0);
      v13 = this->fields.messageTxtLabelSprite;
      v7 = (System_String_o *)baseSelectInfoLabel;
      if ( !*(&CommandCardEquipmentControl_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
      if ( v13 )
      {
        UISprite__set_spriteName(
          v13,
          CommandCardEquipmentControl_TypeInfo->static_fields->UNLOCK_MESSAGE_SPRITE_NAME,
          0);
        baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.messageTxtLabelSprite;
        if ( baseSelectInfoLabel )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, void *))baseSelectInfoLabel->klass[2]._1.parent)(
            baseSelectInfoLabel,
            baseSelectInfoLabel->klass[2]._1.generic_class);
          baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.executeButtonSprite;
          if ( baseSelectInfoLabel )
          {
            NOT_EQUIP_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->UNLOCK_EXE_BTN_SPRITE_NAME;
LABEL_106:
            UISprite__set_spriteName((UISprite_o *)baseSelectInfoLabel, NOT_EQUIP_EXE_BTN_SPRITE_NAME, 0);
            goto LABEL_107;
          }
        }
      }
      goto LABEL_113;
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
    baseSelectInfoLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3714/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, 0);
    v17 = this->fields.messageTxtLabelSprite;
    v7 = (System_String_o *)baseSelectInfoLabel;
    if ( !*(&CommandCardEquipmentControl_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
    if ( !v17 )
      goto LABEL_113;
    UISprite__set_spriteName(v17, CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_MESSAGE_SPRITE_NAME, 0);
    baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.messageTxtLabelSprite;
    if ( !baseSelectInfoLabel )
      goto LABEL_113;
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))baseSelectInfoLabel->klass[2]._1.parent)(
      baseSelectInfoLabel,
      baseSelectInfoLabel->klass[2]._1.generic_class);
    baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.executeButtonSprite;
    if ( !baseSelectInfoLabel )
      goto LABEL_113;
    UISprite__set_spriteName(
      (UISprite_o *)baseSelectInfoLabel,
      CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME,
      0);
    baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.executeButtonSprite;
    if ( !baseSelectInfoLabel )
      goto LABEL_113;
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))baseSelectInfoLabel->klass[2]._1.parent)(
      baseSelectInfoLabel,
      baseSelectInfoLabel->klass[2]._1.generic_class);
    v16 = &StringLiteral_3715/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/;
LABEL_47:
    v18 = this->fields.baseSelectInfoLabel;
    baseSelectInfoLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v16, 0);
    if ( v18 )
    {
      UILabel__set_text(v18, (System_String_o *)baseSelectInfoLabel, 0);
      baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.baseSelectInfoLabel;
      if ( baseSelectInfoLabel )
      {
        baseSelectInfoLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSelectInfoLabel, 0);
        if ( baseSelectInfoLabel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSelectInfoLabel, 1, 0);
          goto LABEL_109;
        }
      }
    }
    goto LABEL_113;
  }
  if ( state != 2 )
  {
    if ( state != 4 )
      goto LABEL_109;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
    baseSelectInfoLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, 0);
    v15 = this->fields.messageTxtLabelSprite;
    v7 = (System_String_o *)baseSelectInfoLabel;
    if ( !*(&CommandCardEquipmentControl_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
    if ( !v15 )
      goto LABEL_113;
    UISprite__set_spriteName(v15, CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_MESSAGE_SPRITE_NAME, 0);
    baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.messageTxtLabelSprite;
    if ( !baseSelectInfoLabel )
      goto LABEL_113;
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))baseSelectInfoLabel->klass[2]._1.parent)(
      baseSelectInfoLabel,
      baseSelectInfoLabel->klass[2]._1.generic_class);
    baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.executeButtonSprite;
    if ( !baseSelectInfoLabel )
      goto LABEL_113;
    UISprite__set_spriteName(
      (UISprite_o *)baseSelectInfoLabel,
      CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME,
      0);
    baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.executeButtonSprite;
    if ( !baseSelectInfoLabel )
      goto LABEL_113;
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))baseSelectInfoLabel->klass[2]._1.parent)(
      baseSelectInfoLabel,
      baseSelectInfoLabel->klass[2]._1.generic_class);
    v16 = &StringLiteral_3718/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/;
    goto LABEL_47;
  }
  v19 = this->fields.targetCommandCardData;
  if ( !v19 )
    goto LABEL_113;
  if ( v19->fields._NowKind_k__BackingField == 2 )
  {
    nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
    if ( !nowEquipedUserCommandCodeEntity )
      goto LABEL_113;
    v21 = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v35.fields.fakeValue = v21;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&state);
    v34 = v35;
    baseSelectInfoLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                       &v34,
                                                       0);
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
      goto LABEL_113;
    v23 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v33.fields.fakeValue = v23;
    v24 = baseSelectInfoLabel == (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                              &v33,
                                                              0);
    v26 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v24 )
    {
      if ( !v26 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      baseSelectInfoLabel = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3720/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
                                                         0);
      executeButtonSprite = this->fields.executeButtonSprite;
      v7 = (System_String_o *)baseSelectInfoLabel;
      if ( !*(&CommandCardEquipmentControl_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
      if ( !executeButtonSprite )
        goto LABEL_113;
      REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->NOT_EQUIP_EXE_BTN_SPRITE_NAME;
    }
    else
    {
      if ( !v26 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      baseSelectInfoLabel = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3720/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
                                                         0);
      executeButtonSprite = this->fields.executeButtonSprite;
      v7 = (System_String_o *)baseSelectInfoLabel;
      if ( !*(&CommandCardEquipmentControl_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
      if ( !executeButtonSprite )
        goto LABEL_113;
      REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->REPLACE_EXE_BTN_SPRITE_NAME;
    }
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
    baseSelectInfoLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3719/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, 0);
    executeButtonSprite = this->fields.executeButtonSprite;
    v7 = (System_String_o *)baseSelectInfoLabel;
    if ( !*(&CommandCardEquipmentControl_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
    if ( !executeButtonSprite )
      goto LABEL_113;
    REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
  }
  UISprite__set_spriteName(executeButtonSprite, REPLACE_EXE_BTN_SPRITE_NAME, 0);
  baseSelectInfoLabel = (UnityEngine_Component_o *)CommandCardEquipmentControl_TypeInfo;
  v29 = this->fields.messageTxtLabelSprite;
  if ( !*(&CommandCardEquipmentControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
  if ( !v29 )
    goto LABEL_113;
  UISprite__set_spriteName(v29, CommandCardEquipmentControl_TypeInfo->static_fields->SELECTED_MESSAGE_SPRITE_NAME, 0);
  baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.messageTxtLabelSprite;
  if ( !baseSelectInfoLabel )
    goto LABEL_113;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))baseSelectInfoLabel->klass[2]._1.parent)(
    baseSelectInfoLabel,
    baseSelectInfoLabel->klass[2]._1.generic_class);
LABEL_107:
  baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.executeButtonSprite;
  if ( !baseSelectInfoLabel )
    goto LABEL_113;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))baseSelectInfoLabel->klass[2]._1.parent)(
    baseSelectInfoLabel,
    baseSelectInfoLabel->klass[2]._1.generic_class);
LABEL_109:
  baseSelectInfoLabel = (UnityEngine_Component_o *)this->fields.detailLabel;
  if ( !baseSelectInfoLabel )
    goto LABEL_113;
  UILabel__set_text((UILabel_o *)baseSelectInfoLabel, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl__SetTargetIndexSelectSprite(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct CombineCommandCardComponent_array *commandCardList; // x8
  il2cpp_array_size_t max_length; // x20
  CommandCardEquipmentControl_o *v5; // x19
  __int64 v6; // x21
  struct CombineCommandCardComponent_array *v8; // x8

  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_9;
  max_length = commandCardList->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = this;
    v6 = 0;
    while ( 1 )
    {
      v8 = v5->fields.commandCardList;
      if ( !v8 )
        break;
      if ( (unsigned int)v6 >= LODWORD(v8->max_length) )
        sub_2213CE4(this);
      this = (CommandCardEquipmentControl_o *)v8->m_Items[v6];
      if ( !this )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)this, index == (_DWORD)v6++, 0);
      if ( (_DWORD)max_length == (_DWORD)v6 )
        return;
    }
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&index);
  }
}


void CommandCardEquipmentControl__SetUnlockItemInfo(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  ServantCommandCodeUnlockMaster_o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w21
  LimitCntUpItemComponent_o *v10; // x21
  UILabel_o *spendQpLabel; // x20
  System_String_o *v12; // x1
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  struct UnityEngine_GameObject_o *statusInfo; // x22
  __int64 max_length_low; // x23
  unsigned __int64 v16; // x24
  void **p_monitor; // x27
  struct UnityEngine_GameObject_o *itemInfo; // x25
  signed __int64 klass_low; // x26
  void **v20; // x28
  struct LimitCntUpItemComponent_array *v21; // x8
  LimitCntUpItemComponent_o *v22; // x21
  bool v23; // cc
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974A6A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_5974A6A = 1;
  }
  CommandCardEquipmentControl__SetHaveQpInfo(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_45;
  v6 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v24.fields.currentCryptoKey = v7;
  *(_QWORD *)&v24.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v24, 0);
  if ( !this->fields.targetCommandCardData )
    goto LABEL_45;
  v9 = (int)Instance;
  Instance = (DataManager_o *)BattleCommandComponent__getMarkIndex(
                                (BattleCommandComponent_o *)this->fields.targetCommandCardData,
                                0);
  if ( !v6 )
    goto LABEL_45;
  Instance = (DataManager_o *)ServantCommandCodeUnlockMaster__GetEntity(v6, v9, (int32_t)Instance, 0);
  if ( !Instance )
    goto LABEL_45;
  v10 = (LimitCntUpItemComponent_o *)Instance;
  spendQpLabel = this->fields.spendQpLabel;
  v12 = (System_String_o *)StringLiteral_9617/*"N0"*/;
  this->fields.spendQpVal = (int32_t)Instance->fields.m_CancellationTokenSource;
  Instance = (DataManager_o *)System_Int32__ToString_77138656((int)this + 600, v12, 0);
  if ( !spendQpLabel )
    goto LABEL_45;
  UILabel__set_text(spendQpLabel, (System_String_o *)Instance, 0);
  unlockItemInfoList = this->fields.unlockItemInfoList;
  if ( !unlockItemInfoList )
    goto LABEL_45;
  statusInfo = v10->fields.statusInfo;
  if ( !statusInfo )
    goto LABEL_45;
  max_length_low = LODWORD(unlockItemInfoList->max_length);
  if ( (int)max_length_low >= 1 )
  {
    v16 = 0;
    p_monitor = &statusInfo[1].monitor;
    itemInfo = v10->fields.itemInfo;
    klass_low = SLODWORD(statusInfo[1].klass);
    v20 = &itemInfo[1].monitor;
    do
    {
      v21 = this->fields.unlockItemInfoList;
      if ( (__int64)v16 >= klass_low )
      {
        if ( !v21 )
          goto LABEL_45;
        if ( v16 >= LODWORD(v21->max_length) )
LABEL_44:
          sub_2213CE4(Instance);
        Instance = (DataManager_o *)v21->m_Items[v16];
        if ( !Instance )
          goto LABEL_45;
        LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)Instance, 0);
      }
      else
      {
        if ( !v21 )
          goto LABEL_45;
        if ( v16 >= LODWORD(v21->max_length) )
          goto LABEL_44;
        v22 = v21->m_Items[v16];
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v16 >= LODWORD(statusInfo[1].klass) )
          goto LABEL_44;
        if ( !itemInfo )
          goto LABEL_45;
        if ( v16 >= LODWORD(itemInfo[1].klass) )
          goto LABEL_44;
        if ( !v22 )
          goto LABEL_45;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v22,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          *((_DWORD *)p_monitor + v16),
          *((_DWORD *)v20 + v16),
          0);
        if ( v16 >= LODWORD(statusInfo[1].klass) || v16 >= LODWORD(itemInfo[1].klass) )
          goto LABEL_44;
        CombineMenuControl__AddCombineItemInfo(
          (CombineMenuControl_o *)this,
          *((_DWORD *)p_monitor + v16),
          *((_DWORD *)v20 + v16),
          0);
        if ( !v22->fields.isItemNum )
          this->fields.isShortNeedItem = 1;
      }
      ++v16;
    }
    while ( max_length_low != v16 );
  }
  v23 = this->fields.haveQpVal < this->fields.spendQpVal;
  this->fields.isCanCombine = 1;
  this->fields.isShortQp = v23;
  if ( v23 )
  {
    Instance = (DataManager_o *)this->fields.spendQpLabel;
    if ( Instance )
    {
      v25.fields.g = 0.0;
      v25.fields.b = 0.0;
      v25.fields.r = 1.0;
      v25.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v25, 0);
      this->fields.isCanCombine = 0;
      goto LABEL_41;
    }
LABEL_45:
    sub_2213CDC(Instance, v4);
  }
LABEL_41:
  if ( this->fields.isShortNeedItem )
    this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v4);
}


void CommandCardEquipmentControl__UpdateItemLinkListWindowButton(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v4; // w0
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  bool v8; // w1

  if ( (byte_5974A85 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974A85 = 1;
  }
  itemLinkInfoListBtn = (UnityEngine_Object_o *)this->fields.itemLinkInfoListBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(itemLinkInfoListBtn, 0, 0);
  gameObject = 0;
  if ( v4 )
  {
    Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
    if ( !Instance )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject(Instance, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)gameObject, 0, 0) )
  {
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)CommonUI__get_IsEnableItemLinkInfoListWindow((CommonUI_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0
        && this->fields.baseUserServantEntity
        && (Instance = (UnityEngine_Component_o *)System_Linq_Enumerable__Any_object_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                    (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___),
            ((unsigned __int8)Instance & 1) != 0) )
      {
        if ( gameObject )
        {
          v8 = 1;
LABEL_19:
          UnityEngine_GameObject__SetActive(gameObject, v8, 0);
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
    sub_2213CDC(Instance, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl___OpenLockDialog_b__96_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  BaseDialog_o *commandCardDialog; // x0

  commandCardDialog = (BaseDialog_o *)this->fields.commandCardDialog;
  this->fields.isProcessingButton = 0;
  if ( !commandCardDialog )
    goto LABEL_6;
  BaseDialog__SafeClose(commandCardDialog, 0, 0);
  if ( isDecide )
  {
    commandCardDialog = (BaseDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestLockCommandCode((CombineRootComponent_o *)commandCardDialog, 0);
      return;
    }
LABEL_6:
    sub_2213CDC(commandCardDialog, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl___OpenReturnDialog_b__97_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  BaseDialog_o *commandCardDialog; // x0

  commandCardDialog = (BaseDialog_o *)this->fields.commandCardDialog;
  if ( !commandCardDialog )
    sub_2213CDC(0, isDecide);
  BaseDialog__SafeClose(commandCardDialog, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl___OpenUnlockDialog_b__95_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  BaseDialog_o *commandCardDialog; // x0

  commandCardDialog = (BaseDialog_o *)this->fields.commandCardDialog;
  if ( !commandCardDialog
    || (BaseDialog__SafeClose(commandCardDialog, 0, 0),
        (commandCardDialog = (BaseDialog_o *)this->fields.combineRootComponent) == 0) )
  {
    sub_2213CDC(commandCardDialog, isDecide);
  }
  BYTE1(commandCardDialog[6].fields.maskSprite) = 0;
  if ( isDecide )
    CombineRootComponent__RequestUnlockCommandCode((CombineRootComponent_o *)commandCardDialog, 0);
}


int64_t CommandCardEquipmentControl__get_GetSelectedUserCommandCodeId(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_5974A77 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A77 = 1;
  }
  baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    return -1;
  v4 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v6, 0);
}


int32_t CommandCardEquipmentControl__get_GetTargetCardIndex(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  __int64 v4; // x1
  BattleCommandComponent_o *v5; // x0

  if ( (byte_5974A76 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A76 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0, 0) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return BattleCommandComponent__getMarkIndex(v5, 0);
}


int32_t CommandCardEquipmentControl__get_GetTargetCardType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0

  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_2213CDC(0, method);
  return BattleCommandComponent__getCommandType(targetCommandCardData, 0);
}


int32_t CommandCardEquipmentControl__get_selectedSelfAttachCommandCardIdx(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  return this->fields._selectedSelfAttachCommandCardIdx_k__BackingField;
}


void CommandCardEquipmentControl__set_selectedSelfAttachCommandCardIdx(
        CommandCardEquipmentControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._selectedSelfAttachCommandCardIdx_k__BackingField = value;
}


void CommandCardEquipmentControl__touchCommandCard(
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x2

  if ( (byte_5974A5F & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardEquipmentControl_touchCommandCard__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A5F = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    if ( CommandCardEquipmentControl__IsTransformedServant(this, this->fields.displayTransformIndex, method) )
      goto LABEL_5;
    targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0, 0) )
      goto LABEL_14;
    v10 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
    if ( !v10 )
      sub_2213CDC(0, v9);
    if ( BattleCommandComponent__getMarkIndex(v10, 0) == index )
    {
LABEL_5:
      v6 = Method_CommandCardEquipmentControl_touchCommandCard__;
      if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_2213A78(Method_CommandCardEquipmentControl_touchCommandCard__);
      v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    }
    else
    {
LABEL_14:
      v11 = Method_CommandCardEquipmentControl_touchCommandCard__;
      if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_2213A78(Method_CommandCardEquipmentControl_touchCommandCard__);
      v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
      CommandCardEquipmentControl__SetCommandCardDisplay(this, index, v13);
    }
  }
}


void CommandCardEquipmentControl__PlayReplaceEffect_d__127___ctor(
        CommandCardEquipmentControl__PlayReplaceEffect_d__127_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CommandCardEquipmentControl__PlayReplaceEffect_d__127__MoveNext(
        CommandCardEquipmentControl__PlayReplaceEffect_d__127_o *this,
        const MethodInfo *method)
{
  CommandCardEquipmentControl__PlayReplaceEffect_d__127_o *v2; // x19
  int32_t _1__state; // w8
  struct CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int64 v6; // x22
  __int64 v7; // x23
  int32_t targetCardIdx; // w21
  int32_t v9; // w0
  const MethodInfo *v10; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v12; // x9
  CommandCardEquipmentControl__PlayReplaceEffect_d__127_o *v13; // x20
  Il2CppObject *v14; // x22
  System_Action_o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Action_o *klass; // x0
  UnityEngine_WaitForSeconds_o *v23; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  bool result; // w0
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int64 v33; // x22
  __int64 v34; // x23
  int32_t v35; // w21
  int32_t v36; // w0
  const MethodInfo *v37; // x3
  UnityEngine_WaitForSeconds_o *v38; // x20
  MissionNaviTransitionBoardItem_o *v39; // x19
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Action_o *callback; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  v2 = this;
  if ( (byte_5974A8C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineCommandCardComponent_HideCommandCodeSprite__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CommandCardEquipmentControl__PlayReplaceEffect_d__127_o *)sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5974A8C = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0);
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
          v6 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
          v7 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
          targetCardIdx = v2->fields.targetCardIdx;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
          *(_QWORD *)&v47.fields.currentCryptoKey = v6;
          *(_QWORD *)&v47.fields.fakeValue = v7;
          v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v47, 0);
          this = (CommandCardEquipmentControl__PlayReplaceEffect_d__127_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                              _4__this,
                                                                              targetCardIdx,
                                                                              v9,
                                                                              v10);
          commandCardList = _4__this->fields.commandCardList;
          if ( commandCardList )
          {
            v12 = v2->fields.targetCardIdx;
            if ( (unsigned int)v12 >= LODWORD(commandCardList->max_length) )
              sub_2213CE4(this);
            v13 = this;
            v14 = (Il2CppObject *)commandCardList->m_Items[v12];
            v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v15, v14, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0);
            if ( v13 )
            {
              if ( v15 )
              {
                v13[4].klass = (CommandCardEquipmentControl__PlayReplaceEffect_d__127_c *)v15;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13[4], (int32_t)v15, v16, v17, v18, v19, v20, v21);
              }
              klass = (System_Action_o *)v13[4].klass;
              if ( klass )
                ActionExtensions__Call(klass, 0);
              v23 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v23, 0.3, 0);
              v2->fields.__2__current = (Il2CppObject *)v23;
              p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
              sub_2213A04(p__2__current, (int32_t)v23, v25, v26, v27, v28, v29, v30);
              result = 1;
              p__2__current[-1].fields._BoardType_k__BackingField = 1;
              return result;
            }
          }
        }
      }
LABEL_26:
      sub_2213CDC(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_26;
  CommandCardEquipmentControl__CreateReplaceEffectOnCode(_4__this, method);
  this = (CommandCardEquipmentControl__PlayReplaceEffect_d__127_o *)_4__this->fields.commandCardEquipmentIcon;
  if ( !this )
    goto LABEL_26;
  CombineCommandCardEquipmentComponent__SetEquippedInfo((CombineCommandCardEquipmentComponent_o *)this, 0, -1, 0);
  baseUserCommandCodeEntity = _4__this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_26;
  v33 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  v35 = v2->fields.targetCardIdx;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v48.fields.currentCryptoKey = v33;
  *(_QWORD *)&v48.fields.fakeValue = v34;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v48, 0);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v35, v36, v37);
  v38 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v38, 3.1, 0);
  v2->fields.__2__current = (Il2CppObject *)v38;
  v39 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_2213A04(v39, (int32_t)v38, v40, v41, v42, v43, v44, v45);
  result = 1;
  v39[-1].fields._BoardType_k__BackingField = 2;
  return result;
}


Il2CppObject *CommandCardEquipmentControl__PlayReplaceEffect_d__127__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommandCardEquipmentControl__PlayReplaceEffect_d__127_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CommandCardEquipmentControl__PlayReplaceEffect_d__127__System_Collections_IEnumerator_Reset(
        CommandCardEquipmentControl__PlayReplaceEffect_d__127_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CommandCardEquipmentControl__PlayReplaceEffect_d__127_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *CommandCardEquipmentControl__PlayReplaceEffect_d__127__System_Collections_IEnumerator_get_Current(
        CommandCardEquipmentControl__PlayReplaceEffect_d__127_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CommandCardEquipmentControl__PlayReplaceEffect_d__127__System_IDisposable_Dispose(
        CommandCardEquipmentControl__PlayReplaceEffect_d__127_o *this,
        const MethodInfo *method)
{
  ;
}


void CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128___ctor(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128__MoveNext(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *this,
        const MethodInfo *method)
{
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *v2; // x19
  int32_t _1__state; // w8
  struct CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int64 v6; // x22
  __int64 v7; // x23
  int32_t removeCardIdx; // w21
  int32_t v9; // w0
  const MethodInfo *v10; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v12; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *v13; // x21
  Il2CppObject *v14; // x23
  System_Action_o *v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Action_o *klass; // x0
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int64 v24; // x22
  __int64 v25; // x23
  int32_t attachCardIdx; // w21
  int32_t v27; // w0
  const MethodInfo *v28; // x3
  struct CombineCommandCardComponent_array *v29; // x8
  __int64 v30; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *v31; // x20
  Il2CppObject *v32; // x22
  System_Action_o *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Action_o *v40; // x0
  UnityEngine_WaitForSeconds_o *v41; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  bool result; // w0
  System_Action_o *callback; // x0
  struct UserCommandCodeEntity_o *v51; // x8
  __int64 v52; // x22
  __int64 v53; // x23
  int32_t v54; // w21
  int32_t v55; // w0
  const MethodInfo *v56; // x3
  UnityEngine_WaitForSeconds_o *v57; // x20
  MissionNaviTransitionBoardItem_o *v58; // x19
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  v2 = this;
  if ( (byte_5974A8D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineCommandCardComponent_HideCommandCodeSprite__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *)sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5974A8D = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0);
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
      v6 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
      v7 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
      removeCardIdx = v2->fields.removeCardIdx;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
      *(_QWORD *)&v65.fields.currentCryptoKey = v6;
      *(_QWORD *)&v65.fields.fakeValue = v7;
      v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v65, 0);
      this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                    _4__this,
                                                                                    removeCardIdx,
                                                                                    v9,
                                                                                    v10);
      commandCardList = _4__this->fields.commandCardList;
      if ( !commandCardList )
        goto LABEL_39;
      v12 = v2->fields.removeCardIdx;
      if ( (unsigned int)v12 < LODWORD(commandCardList->max_length) )
      {
        v13 = this;
        v14 = (Il2CppObject *)commandCardList->m_Items[v12];
        v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v15, v14, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0);
        if ( !v13 )
          goto LABEL_39;
        if ( v15 )
        {
          v13[4].klass = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_c *)v15;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13[4], (int32_t)v15, v16, v17, v18, v19, v20, v21);
        }
        klass = (System_Action_o *)v13[4].klass;
        if ( klass )
          ActionExtensions__Call(klass, 0);
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( !nowEquipedUserCommandCodeEntity )
          goto LABEL_27;
        v24 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
        v25 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
        attachCardIdx = v2->fields.attachCardIdx;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v66.fields.currentCryptoKey = v24;
        *(_QWORD *)&v66.fields.fakeValue = v25;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v66, 0);
        this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                      _4__this,
                                                                                      attachCardIdx,
                                                                                      v27,
                                                                                      v28);
        v29 = _4__this->fields.commandCardList;
        if ( !v29 )
LABEL_39:
          sub_2213CDC(this, method);
        v30 = v2->fields.attachCardIdx;
        if ( (unsigned int)v30 < LODWORD(v29->max_length) )
        {
          v31 = this;
          v32 = (Il2CppObject *)v29->m_Items[v30];
          v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v33, v32, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0);
          if ( v31 )
          {
            if ( v33 )
            {
              v31[4].klass = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_c *)v33;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31[4], (int32_t)v33, v34, v35, v36, v37, v38, v39);
            }
            v40 = (System_Action_o *)v31[4].klass;
            if ( v40 )
              ActionExtensions__Call(v40, 0);
LABEL_27:
            v41 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v41, 0.3, 0);
            v2->fields.__2__current = (Il2CppObject *)v41;
            p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
            sub_2213A04(p__2__current, (int32_t)v41, v43, v44, v45, v46, v47, v48);
            result = 1;
            p__2__current[-1].fields._BoardType_k__BackingField = 1;
            return result;
          }
          goto LABEL_39;
        }
      }
      sub_2213CE4(this);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_39;
  if ( _4__this->fields.nowEquipedUserCommandCodeEntity )
    CommandCardEquipmentControl__CreateReplaceEffectOnCode(_4__this, method);
  else
    CommandCardEquipmentControl__CreateAttachEffectOnCode(_4__this, method);
  this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *)_4__this->fields.commandCardEquipmentIcon;
  if ( !this )
    goto LABEL_39;
  CombineCommandCardEquipmentComponent__SetEquippedInfo((CombineCommandCardEquipmentComponent_o *)this, 0, -1, 0);
  v51 = _4__this->fields.baseUserCommandCodeEntity;
  if ( !v51 )
    goto LABEL_39;
  v52 = *(_QWORD *)&v51->fields.commandCodeId.fields.currentCryptoKey;
  v53 = *(_QWORD *)&v51->fields.commandCodeId.fields.fakeValue;
  v54 = v2->fields.attachCardIdx;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v67.fields.currentCryptoKey = v52;
  *(_QWORD *)&v67.fields.fakeValue = v53;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v67, 0);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v54, v55, v56);
  v57 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v57, 3.1, 0);
  v2->fields.__2__current = (Il2CppObject *)v57;
  v58 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_2213A04(v58, (int32_t)v57, v59, v60, v61, v62, v63, v64);
  result = 1;
  v58[-1].fields._BoardType_k__BackingField = 2;
  return result;
}


Il2CppObject *CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128__System_Collections_IEnumerator_Reset(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128__System_Collections_IEnumerator_get_Current(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128__System_IDisposable_Dispose(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__128_o *this,
        const MethodInfo *method)
{
  ;
}


void CommandCardEquipmentControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974A88 & 1) == 0 )
  {
    sub_2213A60(&CommandCardEquipmentControl___c_TypeInfo);
    byte_5974A88 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CommandCardEquipmentControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandCardEquipmentControl___c_TypeInfo->static_fields->__9 = (struct CommandCardEquipmentControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CommandCardEquipmentControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommandCardEquipmentControl___c___ctor(CommandCardEquipmentControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CommandCardEquipmentControl___c___OnLongPushCommandCode_b__107_0(
        CommandCardEquipmentControl___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5974A89 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974A89 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void CommandCardEquipmentControl___c__DisplayClass126_0___ctor(
        CommandCardEquipmentControl___c__DisplayClass126_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CommandCardEquipmentControl___c__DisplayClass126_0___PlayRemoveEffect_b__0(
        CommandCardEquipmentControl___c__DisplayClass126_0_o *this,
        const MethodInfo *method)
{
  struct CommandCardEquipmentControl_o *_4__this; // x8
  CommandCardEquipmentControl___c__DisplayClass126_0_o *v3; // x19
  struct CommandCardEquipmentControl_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (CommandCardEquipmentControl___c__DisplayClass126_0_o *)_4__this->fields.commandCardEquipmentIcon) == 0)
    || (this = (CommandCardEquipmentControl___c__DisplayClass126_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0), (v4 = v3->fields.__4__this) == 0)
    || (this = (CommandCardEquipmentControl___c__DisplayClass126_0_o *)v4->fields.commandCardEquipmentSkillIcon) == 0
    || (this = (CommandCardEquipmentControl___c__DisplayClass126_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0)) == 0 )
  {
    sub_2213CDC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void CommandCardEquipmentControl___c__DisplayClass126_0___PlayRemoveEffect_b__1(
        CommandCardEquipmentControl___c__DisplayClass126_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0);
}


void CommandCardEquipmentControl___c__DisplayClass94_0___ctor(
        CommandCardEquipmentControl___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl___c__DisplayClass94_0___OpenEquippedCommandCodeAttachDialog_b__0(
        CommandCardEquipmentControl___c__DisplayClass94_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardEquipmentControl___c__DisplayClass94_0_o *v4; // x20
  struct CommandCardEquipmentControl_o *_4__this; // x8

  v4 = this;
  if ( (byte_5974A8A & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass94_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974A8A = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  this = (CommandCardEquipmentControl___c__DisplayClass94_0_o *)_4__this->fields.combineRootComponent;
  if ( !this )
    goto LABEL_9;
  BYTE1(this[21].monitor) = 0;
  if ( isDecide )
    CombineRootComponent__RequestSelfAttachReplaceCommandCode((CombineRootComponent_o *)this, 0);
  this = (CommandCardEquipmentControl___c__DisplayClass94_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_9:
    sub_2213CDC(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardEquipmentControl___c__DisplayClass94_0___OpenEquippedCommandCodeAttachDialog_b__1(
        CommandCardEquipmentControl___c__DisplayClass94_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardEquipmentControl___c__DisplayClass94_0_o *v4; // x20
  struct CommandCardEquipmentControl_o *_4__this; // x8

  v4 = this;
  if ( (byte_5974A8B & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass94_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974A8B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (CommandCardEquipmentControl___c__DisplayClass94_0_o *)_4__this->fields.combineRootComponent;
  if ( !this )
    goto LABEL_11;
  BYTE1(this[21].monitor) = 0;
  if ( isDecide )
  {
    if ( v4->fields.isCommandCardEmpty )
      CombineRootComponent__RequestEquipCommandCode((CombineRootComponent_o *)this, 0);
    else
      CombineRootComponent__RequestReplaceCommandCode((CombineRootComponent_o *)this, 0);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass94_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_11:
    sub_2213CDC(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0);
}