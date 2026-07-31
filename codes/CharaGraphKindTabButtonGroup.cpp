void CharaGraphKindTabButtonGroup___ctor(CharaGraphKindTabButtonGroup_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CharaGraphKindTabButtonGroup__AssertionForSerializeField(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  ;
}


void CharaGraphKindTabButtonGroup__Awake(CharaGraphKindTabButtonGroup_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphKindTabButtonGroup_o *, const MethodInfo *))this->klass->vtable._4_AssertionForSerializeField.methodPtr)(
    this,
    this->klass->vtable._4_AssertionForSerializeField.method);
}


void CharaGraphKindTabButtonGroup__ClickTabServant(CharaGraphKindTabButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabServant_k__BackingField, 0);
}


void CharaGraphKindTabButtonGroup__ClickTabServantCommandCode(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabCommandCode_k__BackingField, 0);
}


void CharaGraphKindTabButtonGroup__ClickTabServantEquip(CharaGraphKindTabButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabServantEquip_k__BackingField, 0);
}


bool CharaGraphKindTabButtonGroup__IsActive(UnityEngine_Component_o *c, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_5937904 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937904 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0)) == 0 )
    sub_21FFECC(gameObject, v5);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


void CharaGraphKindTabButtonGroup__SetupTabButton(
        UICommonButton_o *button,
        UISprite_o *titleSprite,
        UISprite_o *tabSprite,
        bool isSelectedTab,
        System_String_o *onName,
        System_String_o *offName,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  _BOOL8 v19; // x0
  __int64 v20; // x1
  bool enabled; // w0
  System_String_o *v22; // x1
  __int64 *v23; // x8

  if ( (byte_5937903 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18168/*"btn_bg_12"*/);
    sub_21FFC50(&StringLiteral_18170/*"btn_bg_19"*/);
    byte_5937903 = 1;
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)button, (const MethodInfo *)titleSprite) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)titleSprite, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      v19 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tabSprite, 0, 0);
      if ( !v19 )
      {
        if ( !button
          || (((void (__fastcall *)(UICommonButton_o *, __int64, const MethodInfo *))button->klass->vtable._5_set_isEnabled.methodPtr)(
                button,
                1,
                button->klass->vtable._5_set_isEnabled.method),
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)button, !isSelectedTab, 0),
              ((void (__fastcall *)(UICommonButton_o *, _QWORD, bool, const MethodInfo *))button->klass->vtable._14_SetState.methodPtr)(
                button,
                0,
                !isInit,
                button->klass->vtable._14_SetState.method),
              enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)button, 0),
              UICommonButton__SetColliderEnable(button, enabled, !isInit, 0),
              !titleSprite)
          || (!isSelectedTab ? (v22 = offName) : (v22 = onName),
              UISprite__set_spriteName(titleSprite, v22, 0),
              !tabSprite) )
        {
          sub_21FFECC(v19, v20);
        }
        v23 = &StringLiteral_18170/*"btn_bg_19"*/;
        if ( !isSelectedTab )
          v23 = &StringLiteral_18168/*"btn_bg_12"*/;
        UISprite__set_spriteName(tabSprite, (System_String_o *)*v23, 0);
      }
    }
  }
}


void CharaGraphKindTabButtonGroup__SetupTabButtons(
        CharaGraphKindTabButtonGroup_o *this,
        int32_t iTabKind,
        bool isInit,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7
  const MethodInfo *v8; // x7
  const MethodInfo *v9; // x7

  if ( (byte_5937902 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18292/*"btn_txt_craftessence_off"*/);
    sub_21FFC50(&StringLiteral_18333/*"btn_txt_servant_off"*/);
    sub_21FFC50(&StringLiteral_18288/*"btn_txt_cc_off"*/);
    sub_21FFC50(&StringLiteral_18289/*"btn_txt_cc_on"*/);
    sub_21FFC50(&StringLiteral_18334/*"btn_txt_servant_on"*/);
    sub_21FFC50(&StringLiteral_18293/*"btn_txt_craftessence_on"*/);
    byte_5937902 = 1;
  }
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantTabButton,
    this->fields.servantTabTitleSprite,
    this->fields.servantTabSprite,
    iTabKind == 0,
    (System_String_o *)StringLiteral_18334/*"btn_txt_servant_on"*/,
    (System_String_o *)StringLiteral_18333/*"btn_txt_servant_off"*/,
    isInit,
    v4);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantEquipTabButton,
    this->fields.servantEquipTabTitleSprite,
    this->fields.servantEquipTabSprite,
    iTabKind == 1,
    (System_String_o *)StringLiteral_18293/*"btn_txt_craftessence_on"*/,
    (System_String_o *)StringLiteral_18292/*"btn_txt_craftessence_off"*/,
    isInit,
    v8);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.commandCodeTabButton,
    this->fields.commandCodeTabTitleSprite,
    this->fields.commandCodeTabSprite,
    iTabKind == 2,
    (System_String_o *)StringLiteral_18289/*"btn_txt_cc_on"*/,
    (System_String_o *)StringLiteral_18288/*"btn_txt_cc_off"*/,
    isInit,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphKindTabButtonGroup__SetupTabLabel(
        CharaGraphKindTabButtonGroup_o *this,
        int32_t iTabKind,
        const MethodInfo *method)
{
  LocalizationManager_c *v5; // x0
  float *static_fields; // x8
  float v7; // s10
  float v8; // s11
  float v9; // s8
  float v10; // s9
  struct LocalizationManager_StaticFields *v11; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  __int64 v16; // x1
  __int64 v17; // x2
  UserGameEntity_o *SelfUserGame; // x22
  UserServantMaster_o *Master_object; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  UILabel_o *servantTabLabel; // x23
  System_String_o *v25; // x24
  Il2CppObject *v26; // x25
  Il2CppObject *v27; // x0
  float v28; // s3
  float v29; // s2
  float v30; // s1
  float v31; // s0 OVERLAPPED
  const MethodInfo *v32; // x1
  __int64 v33; // x2
  UILabel_o *servantEquipTabLabel; // x23
  System_String_o *v35; // x24
  Il2CppObject *v36; // x25
  Il2CppObject *v37; // x0
  float v38; // s3
  float v39; // s2
  float v40; // s1
  float v41; // s0 OVERLAPPED
  __int64 v42; // x1
  __int64 v43; // x2
  int32_t Count; // w0
  __int64 v45; // x1
  __int64 v46; // x2
  UILabel_o *commandCodeTabLabel; // x21
  int32_t v48; // w24
  System_String_o *v49; // x23
  __int64 v50; // x2
  Il2CppObject *v51; // x24
  BalanceConfig_c *v52; // x0
  Il2CppObject *v53; // x0
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v55; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5937901 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3475/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_21FFC50(&StringLiteral_3476/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_21FFC50(&StringLiteral_3477/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_5937901 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind, method);
  if ( !byte_5932AD3 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5932AD3 = 1;
  }
  v5 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind, method);
    v5 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v5->static_fields;
  v8 = static_fields[20];
  v7 = static_fields[21];
  v10 = static_fields[22];
  v9 = static_fields[23];
  if ( !byte_5932AD4 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    v5 = LocalizationManager_TypeInfo;
    byte_5932AD4 = 1;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&iTabKind, method);
    v5 = LocalizationManager_TypeInfo;
  }
  v11 = v5->static_fields;
  r = v11->selectEffectColor.fields.r;
  g = v11->selectEffectColor.fields.g;
  b = v11->selectEffectColor.fields.b;
  a = v11->selectEffectColor.fields.a;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  UserServantMaster__getCount(Master_object, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantTabButton, v21) )
  {
    servantTabLabel = this->fields.servantTabLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3476/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
    v55 = servantEquipSum[1];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(qword_594C070, &v55);
    if ( !SelfUserGame )
      goto LABEL_51;
    v26 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtKeep;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtKeep);
    Master_object = (UserServantMaster_o *)System_String__Format_75484576(v25, v26, v27, 0);
    if ( !servantTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantTabLabel, (System_String_o *)Master_object, 0);
    v28 = v9;
    v29 = v10;
    Master_object = (UserServantMaster_o *)this->fields.servantTabLabel;
    v30 = v7;
    v31 = v8;
    if ( !iTabKind )
    {
      v28 = a;
      v29 = b;
      v30 = g;
      v31 = r;
    }
    if ( !Master_object )
      goto LABEL_51;
    UILabel__set_effectColor((UILabel_o *)Master_object, *(UnityEngine_Color_o *)&v31, 0);
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantEquipTabButton, v22) )
  {
    servantEquipTabLabel = this->fields.servantEquipTabLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3477/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
    v55 = servantEquipSum[0];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(qword_594C070, &v55);
    if ( !SelfUserGame )
      goto LABEL_51;
    v36 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtEquipKeep;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtKeep);
    Master_object = (UserServantMaster_o *)System_String__Format_75484576(v35, v36, v37, 0);
    if ( !servantEquipTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantEquipTabLabel, (System_String_o *)Master_object, 0);
    v38 = v9;
    v39 = v10;
    Master_object = (UserServantMaster_o *)this->fields.servantEquipTabLabel;
    v40 = v7;
    v41 = v8;
    if ( iTabKind == 1 )
    {
      v38 = a;
      v39 = b;
      v40 = g;
      v41 = r;
    }
    if ( !Master_object )
      goto LABEL_51;
    UILabel__set_effectColor((UILabel_o *)Master_object, *(UnityEngine_Color_o *)&v41, 0);
  }
  if ( !CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.commandCodeTabButton, v32) )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42, v43);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Master_object, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v48 = Count;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3475/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v55 = v48;
  Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(qword_594C070, &v55);
  if ( !SelfUserGame )
    goto LABEL_51;
  v51 = (Il2CppObject *)Master_object;
  if ( !byte_59324C8 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_59324C8 = 1;
  }
  v52 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20, v50);
    v52 = BalanceConfig_TypeInfo;
  }
  svtKeep = v52->static_fields->CommandCodeFrameMax;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtKeep);
  Master_object = (UserServantMaster_o *)System_String__Format_75484576(v49, v51, v53, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_51;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Master_object, 0);
  Master_object = (UserServantMaster_o *)this->fields.commandCodeTabLabel;
  if ( iTabKind == 2 )
  {
    v9 = a;
    v10 = b;
    v7 = g;
    v8 = r;
  }
  if ( !Master_object )
LABEL_51:
    sub_21FFECC(Master_object, v20);
  v57.fields.r = v8;
  v57.fields.g = v7;
  v57.fields.b = v10;
  v57.fields.a = v9;
  UILabel__set_effectColor((UILabel_o *)Master_object, v57, 0);
}


System_Action_o *CharaGraphKindTabButtonGroup__get_OnClickTabCommandCode(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabCommandCode_k__BackingField;
}


System_Action_o *CharaGraphKindTabButtonGroup__get_OnClickTabServant(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabServant_k__BackingField;
}


System_Action_o *CharaGraphKindTabButtonGroup__get_OnClickTabServantEquip(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabServantEquip_k__BackingField;
}


void CharaGraphKindTabButtonGroup__set_OnClickTabCommandCode(
        CharaGraphKindTabButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickTabCommandCode_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickTabCommandCode_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphKindTabButtonGroup__set_OnClickTabServant(
        CharaGraphKindTabButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickTabServant_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickTabServant_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphKindTabButtonGroup__set_OnClickTabServantEquip(
        CharaGraphKindTabButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickTabServantEquip_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickTabServantEquip_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}