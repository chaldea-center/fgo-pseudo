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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4D2BAF2 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BAF2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0)) == 0 )
    sub_1C942F0(gameObject, v4);
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
  _BOOL8 v15; // x0
  __int64 v16; // x1
  _BOOL4 v17; // w25
  bool enabled; // w0
  System_String_o *v19; // x1
  __int64 *v20; // x8

  if ( (byte_4D2BAF1 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_17530/*"btn_bg_12"*/);
    sub_1C94098(&StringLiteral_17532/*"btn_bg_19"*/);
    byte_4D2BAF1 = 1;
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)button, (const MethodInfo *)titleSprite) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)titleSprite, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tabSprite, 0, 0);
      if ( !v15 )
      {
        if ( !button )
          goto LABEL_20;
        ((void (__fastcall *)(UICommonButton_o *, __int64, const MethodInfo *))button->klass->vtable._5_set_isEnabled.methodPtr)(
          button,
          1,
          button->klass->vtable._5_set_isEnabled.method);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)button, !isSelectedTab, 0);
        v17 = !isInit;
        ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, const MethodInfo *))button->klass->vtable._14_SetState.methodPtr)(
          button,
          0,
          v17,
          button->klass->vtable._14_SetState.method);
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)button, 0);
        UICommonButton__SetColliderEnable(button, enabled, v17, 0);
        if ( !titleSprite )
          goto LABEL_20;
        v19 = isSelectedTab ? onName : offName;
        UISprite__set_spriteName(titleSprite, v19, 0);
        if ( !tabSprite )
LABEL_20:
          sub_1C942F0(v15, v16);
        v20 = &StringLiteral_17532/*"btn_bg_19"*/;
        if ( !isSelectedTab )
          v20 = &StringLiteral_17530/*"btn_bg_12"*/;
        UISprite__set_spriteName(tabSprite, (System_String_o *)*v20, 0);
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
  bool v8; // w21
  const MethodInfo *v9; // x7
  const MethodInfo *v10; // x7

  if ( (byte_4D2BAF0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17646/*"btn_txt_craftessence_off"*/);
    sub_1C94098(&StringLiteral_17686/*"btn_txt_servant_off"*/);
    sub_1C94098(&StringLiteral_17642/*"btn_txt_cc_off"*/);
    sub_1C94098(&StringLiteral_17643/*"btn_txt_cc_on"*/);
    sub_1C94098(&StringLiteral_17687/*"btn_txt_servant_on"*/);
    sub_1C94098(&StringLiteral_17647/*"btn_txt_craftessence_on"*/);
    byte_4D2BAF0 = 1;
  }
  v8 = isInit;
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantTabButton,
    this->fields.servantTabTitleSprite,
    this->fields.servantTabSprite,
    iTabKind == 0,
    (System_String_o *)StringLiteral_17687/*"btn_txt_servant_on"*/,
    (System_String_o *)StringLiteral_17686/*"btn_txt_servant_off"*/,
    v8,
    v4);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantEquipTabButton,
    this->fields.servantEquipTabTitleSprite,
    this->fields.servantEquipTabSprite,
    iTabKind == 1,
    (System_String_o *)StringLiteral_17647/*"btn_txt_craftessence_on"*/,
    (System_String_o *)StringLiteral_17646/*"btn_txt_craftessence_off"*/,
    v8,
    v9);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.commandCodeTabButton,
    this->fields.commandCodeTabTitleSprite,
    this->fields.commandCodeTabSprite,
    iTabKind == 2,
    (System_String_o *)StringLiteral_17643/*"btn_txt_cc_on"*/,
    (System_String_o *)StringLiteral_17642/*"btn_txt_cc_off"*/,
    v8,
    v10);
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
  UserGameEntity_o *SelfUserGame; // x22
  UserServantMaster_o *Master_object; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  UILabel_o *servantTabLabel; // x23
  System_String_o *v22; // x24
  Il2CppObject *v23; // x25
  Il2CppObject *v24; // x0
  float v25; // s3
  float v26; // s2
  float v27; // s1
  float v28; // s0 OVERLAPPED
  const MethodInfo *v29; // x1
  UILabel_o *servantEquipTabLabel; // x23
  System_String_o *v31; // x24
  Il2CppObject *v32; // x25
  Il2CppObject *v33; // x0
  float v34; // s3
  float v35; // s2
  float v36; // s1
  float v37; // s0 OVERLAPPED
  int32_t Count; // w0
  UILabel_o *commandCodeTabLabel; // x21
  int32_t v40; // w24
  System_String_o *v41; // x23
  Il2CppObject *v42; // x24
  BalanceConfig_c *v43; // x0
  Il2CppObject *v44; // x0
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v46; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2BAEF & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3345/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_1C94098(&StringLiteral_3346/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_1C94098(&StringLiteral_3347/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_4D2BAEF = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D26E67 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D26E67 = 1;
  }
  v5 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v5->static_fields;
  v8 = static_fields[20];
  v7 = static_fields[21];
  v10 = static_fields[22];
  v9 = static_fields[23];
  if ( !byte_4D26E68 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    v5 = LocalizationManager_TypeInfo;
    byte_4D26E68 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = LocalizationManager_TypeInfo;
  }
  v11 = v5->static_fields;
  r = v11->selectEffectColor.fields.r;
  g = v11->selectEffectColor.fields.g;
  b = v11->selectEffectColor.fields.b;
  a = v11->selectEffectColor.fields.a;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  UserServantMaster__getCount(Master_object, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantTabButton, v19) )
  {
    servantTabLabel = this->fields.servantTabLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3346/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
    v46 = servantEquipSum[1];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
    if ( !SelfUserGame )
      goto LABEL_51;
    v23 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtKeep;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_object = (UserServantMaster_o *)System_String__Format_64459052(v22, v23, v24, 0);
    if ( !servantTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantTabLabel, (System_String_o *)Master_object, 0);
    Master_object = (UserServantMaster_o *)this->fields.servantTabLabel;
    v25 = v9;
    v26 = v10;
    v27 = v7;
    v28 = v8;
    if ( !iTabKind )
    {
      v25 = a;
      v26 = b;
      v27 = g;
      v28 = r;
    }
    if ( !Master_object )
      goto LABEL_51;
    UILabel__set_effectColor((UILabel_o *)Master_object, *(UnityEngine_Color_o *)&v28, 0);
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantEquipTabButton, v20) )
  {
    servantEquipTabLabel = this->fields.servantEquipTabLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3347/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
    v46 = servantEquipSum[0];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
    if ( !SelfUserGame )
      goto LABEL_51;
    v32 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtEquipKeep;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_object = (UserServantMaster_o *)System_String__Format_64459052(v31, v32, v33, 0);
    if ( !servantEquipTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantEquipTabLabel, (System_String_o *)Master_object, 0);
    Master_object = (UserServantMaster_o *)this->fields.servantEquipTabLabel;
    v34 = v9;
    v35 = v10;
    v36 = v7;
    v37 = v8;
    if ( iTabKind == 1 )
    {
      v34 = a;
      v35 = b;
      v36 = g;
      v37 = r;
    }
    if ( !Master_object )
      goto LABEL_51;
    UILabel__set_effectColor((UILabel_o *)Master_object, *(UnityEngine_Color_o *)&v37, 0);
  }
  if ( !CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.commandCodeTabButton, v29) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Master_object, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v40 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3345/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v46 = v40;
  Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  if ( !SelfUserGame )
    goto LABEL_51;
  v42 = (Il2CppObject *)Master_object;
  if ( !byte_4D269E5 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D269E5 = 1;
  }
  v43 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  svtKeep = v43->static_fields->CommandCodeFrameMax;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Master_object = (UserServantMaster_o *)System_String__Format_64459052(v41, v42, v44, 0);
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
    sub_1C942F0(Master_object, v18);
  v48.fields.r = v8;
  v48.fields.g = v7;
  v48.fields.b = v10;
  v48.fields.a = v9;
  UILabel__set_effectColor((UILabel_o *)Master_object, v48, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickTabCommandCode_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickTabCommandCode_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickTabServant_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickTabServant_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickTabServantEquip_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickTabServantEquip_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}